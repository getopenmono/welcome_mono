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

class AppController : public mono::IApplication {

    BackgroundView bg;
    TextLabelView mono;
    TextLabelView visit;
    TextLabelView webaddr;

    Timer sleeper;

public:
    
    AppController();

    void gotoSleep();

    // MARK : Setup & Sleep
    
    void monoWakeFromReset();

    void monoWillGotoSleep();

    void monoWakeFromSleep();
    
};

#endif /* app_controller_h */
