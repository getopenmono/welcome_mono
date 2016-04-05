//
//  app_controller.h
//  
//
//  
//
//

#ifndef app_controller_h
#define app_controller_h

#include <mono.h>
#include <wireless/redpine_module.h>
#include <mbed.h>

using namespace mono;
using namespace mono::ui;

class Toucher : public mono::TouchResponder {
public:
    void RespondTouchBegin(TouchEvent &event);
    void RespondTouchMove(TouchEvent &event);
    void RespondTouchEnd(TouchEvent &event);
    Timer holdTimer;

    mbed::FunctionPointer pushHandler;

    Toucher();
};


class AppController : public mono::IApplication {

    static const uint8_t dampValue = 50;

    BackgroundView bg;
    TextLabelView mono;
    TextLabelView visit;
    TextLabelView webaddr;
    Toucher toucher;
    Timer sleeper, damper;
    display::Color textColor;
    bool webTextShowed;
    int textColorIndex;

public:
    
    AppController();

    void gotoSleep();

    void blitImage(geo::Point const &p, uint8_t *data, int w, int h, uint8_t preScale = 0xFF);

    void blitWebText();

    void changeTextColor();

    void fadeIn();

    void damp();

    void fadeOut();

    void emitSerial();

    // MARK : Setup & Sleep
    
    void monoWakeFromReset();

    void monoWillGotoSleep();

    void monoWakeFromSleep();
    
};

#endif /* app_controller_h */
