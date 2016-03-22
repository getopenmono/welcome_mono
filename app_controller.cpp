//
//  app_controller.cpp
//
//
//
//  
//

#include "app_controller.h"

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
    sleeper(1*60*1000)
{
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
    sleeper.Start();
}

void AppController::gotoSleep()
{
    IApplicationContext::EnterSleepMode();
}

// MARK: Ctrl setup & sleep funcs

void AppController::monoWakeFromReset()
{
    bg.show();
    mono.show();
    visit.show();
    webaddr.show();

    sleeper.Start();
}

void AppController::monoWillGotoSleep()
{

}

void AppController::monoWakeFromSleep()
{
    IApplicationContext::SoftwareResetToApplication();
}