//
//  app_controller.cpp
//
//
//
//  
//

#include "app_controller.h"

#include "mono_bitmap.h"
#include "started_bitmap.h"
#include "web_bitmap.h"
#include "color_table.h"

#ifdef __cplusplus
extern "C" {
#endif
#include <project.h>
#ifdef __cplusplus
}
#endif

using namespace mono;
using namespace mono::geo;
using namespace mono::ui;

// Contructor
// initializes the label object with position and text content
// You should init data here, since I/O is not setup yet.
AppController::AppController() :
    bg(display::WetAsphaltColor),
    mono(Rect(0, 70, View::DisplayWidth(), 20),"Hi, I'm mono"),
    visit(Rect(0, 180, View::DisplayWidth(), 20), "Get started on:"),
    webaddr(Rect(0, 200, View::DisplayWidth(), 20), "developer.openmono.com"),
    sleeper(50*1000, true),
    damper(10*1000, true),
    webTextShowed(false),
    textColorIndex(0)
{
    textColor = display::CloudsColor;

    mono.setBackgroundColor(bg.Color());
    mono.setAlignment(TextLabelView::ALIGN_CENTER);
    mono.setTextColor(display::TurquoiseColor);
    mono.setTextSize(2);

    visit.setBackgroundColor(bg.Color());
    visit.setAlignment(TextLabelView::ALIGN_CENTER);
    visit.setTextColor(display::CloudsColor);
    visit.setTextSize(1);

    webaddr.setBackgroundColor(bg.Color());
    webaddr.setAlignment(TextLabelView::ALIGN_CENTER);
    webaddr.setTextColor(display::CloudsColor);
    webaddr.setTextSize(1);

    sleeper.setCallback<AppController>(this, &AppController::gotoSleep);
    damper.setCallback<AppController>(this, &AppController::damp);

    sleeper.Stop();
    damper.Start();
}

void AppController::gotoSleep()
{
    IApplicationContext::EnterSleepMode();
}

void AppController::blitImage(geo::Point const &p, uint8_t *data, int w, int h, uint8_t preScale)
{
    display::IDisplayController *ctrl = IApplicationContext::Instance->DisplayController;
    ctrl->setWindow(p.X(), p.Y(), w, h);

    int len = w*h;
    for (int b=0; b<len; b++) {
        ctrl->write(textColor.scale(data[b]).scale(preScale));
    }
}

void AppController::fadeIn()
{
    display::IDisplayController *ctrl = IApplicationContext::Instance->DisplayController;
    for (int i=ctrl->Brightness(); i<256; i++) {
        ctrl->setBrightness(i);
        wait_ms(1);
    }
}

void AppController::fadeOut()
{
    display::IDisplayController *ctrl = IApplicationContext::Instance->DisplayController;
    int delay = ctrl->Brightness() < 127 ? 3 : 1;
    for (int i=ctrl->Brightness(); i>0; i--) {
        ctrl->setBrightness(i);
        wait_ms(delay);
    }
}

void AppController::damp()
{
    damper.Stop();

    display::IDisplayController *ctrl = IApplicationContext::Instance->DisplayController;
    if (ctrl->Brightness() <= dampValue)
    {
        sleeper.Start();
        return;
    }

    for (int i=ctrl->Brightness(); i>=dampValue; i--) {
        ctrl->setBrightness(i);
        wait_ms(1);
    }

    sleeper.Start();
}

void AppController::changeTextColor()
{
    sleeper.Stop();
    damper.Stop();

    textColor = display::colorTable[textColorIndex];
    textColorIndex++;

    if (textColorIndex == display::colorTable_size)
        textColorIndex = 0;


    blitImage(Point(176/2-display::mono_bitmap_width/2, 110-display::mono_bitmap_height/2), (uint8_t*)display::mono_bitmap, display::mono_bitmap_width, display::mono_bitmap_height);

    if (webTextShowed)
    {
        blitImage(Point(176/2-45, 170), (uint8_t*)display::started_bitmap, display::started_bitmap_width, display::started_bitmap_height);

        blitImage(Point(176/2-63, 190), (uint8_t*)display::web_bitmap, display::web_bitmap_width, display::web_bitmap_height);
    }

    fadeIn();

    damper.Start();
}

// MARK: Ctrl setup & sleep funcs

void AppController::monoWakeFromReset()
{
/*
    bg.show();
    mono.show();
    visit.show();
    webaddr.show();
*/

    display::IDisplayController *ctrl = IApplicationContext::Instance->DisplayController;
    ctrl->setBrightness(0);

    sleeper.Start();


    ctrl->setWindow(0, 0, ctrl->ScreenWidth(), ctrl->ScreenHeight());
    for (int p = 0; p<ctrl->ScreenWidth()*ctrl->ScreenHeight(); p++) {
        ctrl->write(display::BlackColor);
    }

    blitImage(Point(176/2-display::mono_bitmap_width/2, 110-display::mono_bitmap_height/2), (uint8_t*)display::mono_bitmap, display::mono_bitmap_width, display::mono_bitmap_height);

    Timer::callOnce<AppController>(2000, this, &AppController::blitWebText);

    fadeIn();

    toucher.pushHandler.attach<AppController>(this, &AppController::changeTextColor);
    toucher.Activate();

    //emit serial number on serial port
    uint32_t unique[2] = {0,0};
    CyGetUniqueId((uint32_t*)&unique);
    printf(String::Format("CPU GUID: 0x%X%X\n\r",unique[0],unique[1])());
}

void AppController::blitWebText()
{
    for (int s=0; s<256; s+=2) {
        blitImage(Point(176/2-45, 170), (uint8_t*)display::started_bitmap, display::started_bitmap_width, display::started_bitmap_height, s);

        blitImage(Point(176/2-63, 190), (uint8_t*)display::web_bitmap, display::web_bitmap_width, display::web_bitmap_height, s);
    }

    blitImage(Point(176/2-45, 170), (uint8_t*)display::started_bitmap, display::started_bitmap_width, display::started_bitmap_height);

    blitImage(Point(176/2-63, 190), (uint8_t*)display::web_bitmap, display::web_bitmap_width, display::web_bitmap_height);

    webTextShowed = true;
}

void AppController::monoWillGotoSleep()
{
    fadeOut();
}

void AppController::monoWakeFromSleep()
{
    IApplicationContext::SoftwareResetToApplication();
}


/// MARK: Toucher Methods

void Toucher::RespondTouchBegin(TouchEvent &)
{
    pushHandler.call();
}
void Toucher::RespondTouchMove(TouchEvent &)
{

}
void Toucher::RespondTouchEnd(TouchEvent &)
{

}