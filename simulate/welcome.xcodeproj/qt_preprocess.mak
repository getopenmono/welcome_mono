#############################################################################
# Makefile for building: welcome.app/Contents/MacOS/welcome
# Generated by qmake (3.0) (Qt 5.4.1)
# Project:  project_file.pro
# Template: app
# Command: /Developer/Qt/5.4/clang_64/bin/qmake -spec macx-xcode -config debug -o welcome.xcodeproj/project.pbxproj project_file.pro
#############################################################################

MAKEFILE      = project.pbxproj

MOC       = /Developer/Qt/5.4/clang_64/bin/moc
UIC       = /Developer/Qt/5.4/clang_64/bin/uic
LEX       = flex
LEXFLAGS  = 
YACC      = yacc
YACCFLAGS = -d
DEFINES       = -DEMUNO -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB
INCPATH       = -I. -I../../emuno -I../../emuno/vmbed -I../../emuno/vmbed/target_emuno -I../../mono_framework -I../../mono_framework/display -I../../mono_framework/display/ui -I../../mbedComp/api -I../../mbedComp/hal -I../../mbedComp/common -I/Developer/Qt/5.4/clang_64/lib/QtWidgets.framework/Versions/5/Headers -I/Developer/Qt/5.4/clang_64/lib/QtGui.framework/Versions/5/Headers -I/Developer/Qt/5.4/clang_64/lib/QtNetwork.framework/Versions/5/Headers -I/Developer/Qt/5.4/clang_64/lib/QtCore.framework/Versions/5/Headers -I. -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.11.sdk/System/Library/Frameworks/OpenGL.framework/Versions/A/Headers -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.11.sdk/System/Library/Frameworks/AGL.framework/Headers -I/Developer/Qt/5.4/clang_64/mkspecs/macx-clang -F/Developer/Qt/5.4/clang_64/lib
DEL_FILE  = rm -f
MOVE      = mv -f

IMAGES = 
PARSERS =
preprocess: $(PARSERS) compilers
clean preprocess_clean: parser_clean compiler_clean

parser_clean:
mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

check: first

compilers: moc_emuno_application_context.cpp moc_emuno_display_controller.cpp moc_emuno_run_loop.cpp\
	 moc_mainwindow_controller.cpp moc_touch_system.cpp moc_virtual_display.cpp\
	 moc_mbed_timer.cpp
compiler_objective_c_make_all:
compiler_objective_c_clean:
compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_header_make_all: moc_emuno_application_context.cpp moc_emuno_display_controller.cpp moc_emuno_run_loop.cpp moc_mainwindow_controller.cpp moc_touch_system.cpp moc_virtual_display.cpp moc_mbed_timer.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_emuno_application_context.cpp moc_emuno_display_controller.cpp moc_emuno_run_loop.cpp moc_mainwindow_controller.cpp moc_touch_system.cpp moc_virtual_display.cpp moc_mbed_timer.cpp
moc_emuno_application_context.cpp: /Developer/Qt/5.4/clang_64/lib/QtCore.framework/Versions/5/Headers/QThread \
		/Developer/Qt/5.4/clang_64/lib/QtCore.framework/Versions/5/Headers/QObject \
		../../emuno/emuno.h \
		../../mono_framework/application_controller_interface.h \
		../../mono_framework/application_context_interface.h \
		../../mono_framework/display/display_controller_interface.h \
		../../mbedComp/api/FunctionPointer.h \
		../../mono_framework/ActionQueue.h \
		../../mono_framework/display/color.h \
		../../mono_framework/application_run_loop.h \
		../../mono_framework/application_run_loop_task_interface.h \
		../../mono_framework/mn_digital_out.h \
		../../mbedComp/api/DigitalOut.h \
		../../mbedcomp/api/platform.h \
		../../mbedComp/hal/gpio_api.h \
		../../emuno/vmbed/target_emuno/device.h \
		../../emuno/vmbed/target_emuno/objects.h \
		../../emuno/vmbed/target_emuno/PinNames.h \
		../../emuno/vmbed/target_emuno/gpio_object.h \
		../../emuno/vmbed/project.h \
		../../mono_framework/power_management_interface.h \
		../../mono_framework/power_subsystem_interface.h \
		../../mono_framework/power_aware_interface.h \
		../../mono_framework/touch_system_interface.h \
		../../mono_framework/point.h \
		../../mono_framework/touch_responder.h \
		../../mono_framework/touch_event.h \
		../../mono_framework/queue.h \
		../../mono_framework/consoles.h \
		../../mono_framework/mn_serial.h \
		../../emuno/vmbed/Serial.h \
		../../mono_framework/rect.h \
		../../mono_framework/size.h \
		../../mono_framework/mn_string.h \
		../../mono_framework/queue_interrupt.h \
		../../mbedComp/api/InterruptIn.h \
		../../mbedComp/hal/gpio_irq_api.h \
		../../mbedcomp/api/FunctionPointer.h \
		../../mbedComp/api/Timeout.h \
		../../mbedcomp/api/Ticker.h \
		../../mono_framework/temperature_interface.h \
		../../mono_framework/accelerometer_interface.h \
		../../emuno/emuno_display_controller.h \
		/Developer/Qt/5.4/clang_64/lib/QtCore.framework/Versions/5/Headers/QTimer \
		../../emuno/virtual_display.h \
		/Developer/Qt/5.4/clang_64/lib/QtGui.framework/Versions/5/Headers/QImage \
		../../emuno/power_management.h \
		../../emuno/touch_system.h \
		../../emuno/emuno_run_loop.h \
		../../emuno/emuno_application_context.h
	/Developer/Qt/5.4/clang_64/bin/moc $(DEFINES) -D__APPLE__ -D__GNUC__=4 -I/Developer/Qt/5.4/clang_64/mkspecs/macx-clang -I/Users/ka/Dropbox/monocode/welcome_mono/simulate -I/Users/ka/Dropbox/monocode/emuno -I/Users/ka/Dropbox/monocode/emuno/vmbed -I/Users/ka/Dropbox/monocode/emuno/vmbed/target_emuno -I/Users/ka/Dropbox/monocode/mono_framework -I/Users/ka/Dropbox/monocode/mono_framework/display -I/Users/ka/Dropbox/monocode/mono_framework/display/ui -I/Users/ka/Dropbox/monocode/mbedComp/api -I/Users/ka/Dropbox/monocode/mbedComp/hal -I/Users/ka/Dropbox/monocode/mbedComp/common -I/Developer/Qt/5.4/clang_64/lib/QtWidgets.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtGui.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtNetwork.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtCore.framework/Headers -F/Developer/Qt/5.4/clang_64/lib ../../emuno/emuno_application_context.h -o moc_emuno_application_context.cpp

moc_emuno_display_controller.cpp: /Developer/Qt/5.4/clang_64/lib/QtCore.framework/Versions/5/Headers/QTimer \
		../../mono_framework/display/display_controller_interface.h \
		../../mbedComp/api/FunctionPointer.h \
		../../mono_framework/ActionQueue.h \
		../../mono_framework/display/color.h \
		../../mono_framework/power_aware_interface.h \
		../../emuno/virtual_display.h \
		/Developer/Qt/5.4/clang_64/lib/QtGui.framework/Versions/5/Headers/QImage \
		../../emuno/emuno_display_controller.h
	/Developer/Qt/5.4/clang_64/bin/moc $(DEFINES) -D__APPLE__ -D__GNUC__=4 -I/Developer/Qt/5.4/clang_64/mkspecs/macx-clang -I/Users/ka/Dropbox/monocode/welcome_mono/simulate -I/Users/ka/Dropbox/monocode/emuno -I/Users/ka/Dropbox/monocode/emuno/vmbed -I/Users/ka/Dropbox/monocode/emuno/vmbed/target_emuno -I/Users/ka/Dropbox/monocode/mono_framework -I/Users/ka/Dropbox/monocode/mono_framework/display -I/Users/ka/Dropbox/monocode/mono_framework/display/ui -I/Users/ka/Dropbox/monocode/mbedComp/api -I/Users/ka/Dropbox/monocode/mbedComp/hal -I/Users/ka/Dropbox/monocode/mbedComp/common -I/Developer/Qt/5.4/clang_64/lib/QtWidgets.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtGui.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtNetwork.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtCore.framework/Headers -F/Developer/Qt/5.4/clang_64/lib ../../emuno/emuno_display_controller.h -o moc_emuno_display_controller.cpp

moc_emuno_run_loop.cpp: /Developer/Qt/5.4/clang_64/lib/QtCore.framework/Versions/5/Headers/QObject \
		/Developer/Qt/5.4/clang_64/lib/QtCore.framework/Versions/5/Headers/QThread \
		/Developer/Qt/5.4/clang_64/lib/QtCore.framework/Versions/5/Headers/QTimer \
		../../mono_framework/application_run_loop.h \
		../../mono_framework/application_run_loop_task_interface.h \
		../../mono_framework/mn_digital_out.h \
		../../mbedComp/api/DigitalOut.h \
		../../mbedcomp/api/platform.h \
		../../mbedComp/hal/gpio_api.h \
		../../emuno/vmbed/target_emuno/device.h \
		../../emuno/vmbed/target_emuno/objects.h \
		../../emuno/vmbed/target_emuno/PinNames.h \
		../../emuno/vmbed/target_emuno/gpio_object.h \
		../../emuno/vmbed/project.h \
		../../emuno/emuno_run_loop.h
	/Developer/Qt/5.4/clang_64/bin/moc $(DEFINES) -D__APPLE__ -D__GNUC__=4 -I/Developer/Qt/5.4/clang_64/mkspecs/macx-clang -I/Users/ka/Dropbox/monocode/welcome_mono/simulate -I/Users/ka/Dropbox/monocode/emuno -I/Users/ka/Dropbox/monocode/emuno/vmbed -I/Users/ka/Dropbox/monocode/emuno/vmbed/target_emuno -I/Users/ka/Dropbox/monocode/mono_framework -I/Users/ka/Dropbox/monocode/mono_framework/display -I/Users/ka/Dropbox/monocode/mono_framework/display/ui -I/Users/ka/Dropbox/monocode/mbedComp/api -I/Users/ka/Dropbox/monocode/mbedComp/hal -I/Users/ka/Dropbox/monocode/mbedComp/common -I/Developer/Qt/5.4/clang_64/lib/QtWidgets.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtGui.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtNetwork.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtCore.framework/Headers -F/Developer/Qt/5.4/clang_64/lib ../../emuno/emuno_run_loop.h -o moc_emuno_run_loop.cpp

moc_mainwindow_controller.cpp: /Developer/Qt/5.4/clang_64/lib/QtCore.framework/Versions/5/Headers/QObject \
		/Developer/Qt/5.4/clang_64/lib/QtWidgets.framework/Versions/5/Headers/QMainWindow \
		/Developer/Qt/5.4/clang_64/lib/QtWidgets.framework/Versions/5/Headers/QGraphicsView \
		/Developer/Qt/5.4/clang_64/lib/QtCore.framework/Versions/5/Headers/QTimer \
		/Developer/Qt/5.4/clang_64/lib/QtWidgets.framework/Versions/5/Headers/QApplication \
		../../emuno/virtual_display.h \
		/Developer/Qt/5.4/clang_64/lib/QtGui.framework/Versions/5/Headers/QImage \
		../../emuno/GraphicsPixmapItem.h \
		/Developer/Qt/5.4/clang_64/lib/QtWidgets.framework/Versions/5/Headers/QGraphicsPixmapItem \
		/Developer/Qt/5.4/clang_64/lib/QtGui.framework/Versions/5/Headers/QPixmap \
		../../emuno/mainwindow_controller.h
	/Developer/Qt/5.4/clang_64/bin/moc $(DEFINES) -D__APPLE__ -D__GNUC__=4 -I/Developer/Qt/5.4/clang_64/mkspecs/macx-clang -I/Users/ka/Dropbox/monocode/welcome_mono/simulate -I/Users/ka/Dropbox/monocode/emuno -I/Users/ka/Dropbox/monocode/emuno/vmbed -I/Users/ka/Dropbox/monocode/emuno/vmbed/target_emuno -I/Users/ka/Dropbox/monocode/mono_framework -I/Users/ka/Dropbox/monocode/mono_framework/display -I/Users/ka/Dropbox/monocode/mono_framework/display/ui -I/Users/ka/Dropbox/monocode/mbedComp/api -I/Users/ka/Dropbox/monocode/mbedComp/hal -I/Users/ka/Dropbox/monocode/mbedComp/common -I/Developer/Qt/5.4/clang_64/lib/QtWidgets.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtGui.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtNetwork.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtCore.framework/Headers -F/Developer/Qt/5.4/clang_64/lib ../../emuno/mainwindow_controller.h -o moc_mainwindow_controller.cpp

moc_touch_system.cpp: /Developer/Qt/5.4/clang_64/lib/QtCore.framework/Versions/5/Headers/QObject \
		../../mono_framework/touch_system_interface.h \
		../../mono_framework/application_run_loop_task_interface.h \
		../../mono_framework/point.h \
		../../mono_framework/touch_responder.h \
		../../mono_framework/touch_event.h \
		../../mono_framework/queue.h \
		../../mono_framework/consoles.h \
		../../mono_framework/mn_serial.h \
		../../emuno/vmbed/Serial.h \
		../../mono_framework/power_subsystem_interface.h \
		../../mono_framework/rect.h \
		../../mono_framework/size.h \
		../../mono_framework/mn_string.h \
		../../emuno/touch_system.h
	/Developer/Qt/5.4/clang_64/bin/moc $(DEFINES) -D__APPLE__ -D__GNUC__=4 -I/Developer/Qt/5.4/clang_64/mkspecs/macx-clang -I/Users/ka/Dropbox/monocode/welcome_mono/simulate -I/Users/ka/Dropbox/monocode/emuno -I/Users/ka/Dropbox/monocode/emuno/vmbed -I/Users/ka/Dropbox/monocode/emuno/vmbed/target_emuno -I/Users/ka/Dropbox/monocode/mono_framework -I/Users/ka/Dropbox/monocode/mono_framework/display -I/Users/ka/Dropbox/monocode/mono_framework/display/ui -I/Users/ka/Dropbox/monocode/mbedComp/api -I/Users/ka/Dropbox/monocode/mbedComp/hal -I/Users/ka/Dropbox/monocode/mbedComp/common -I/Developer/Qt/5.4/clang_64/lib/QtWidgets.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtGui.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtNetwork.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtCore.framework/Headers -F/Developer/Qt/5.4/clang_64/lib ../../emuno/touch_system.h -o moc_touch_system.cpp

moc_virtual_display.cpp: /Developer/Qt/5.4/clang_64/lib/QtGui.framework/Versions/5/Headers/QImage \
		../../emuno/virtual_display.h
	/Developer/Qt/5.4/clang_64/bin/moc $(DEFINES) -D__APPLE__ -D__GNUC__=4 -I/Developer/Qt/5.4/clang_64/mkspecs/macx-clang -I/Users/ka/Dropbox/monocode/welcome_mono/simulate -I/Users/ka/Dropbox/monocode/emuno -I/Users/ka/Dropbox/monocode/emuno/vmbed -I/Users/ka/Dropbox/monocode/emuno/vmbed/target_emuno -I/Users/ka/Dropbox/monocode/mono_framework -I/Users/ka/Dropbox/monocode/mono_framework/display -I/Users/ka/Dropbox/monocode/mono_framework/display/ui -I/Users/ka/Dropbox/monocode/mbedComp/api -I/Users/ka/Dropbox/monocode/mbedComp/hal -I/Users/ka/Dropbox/monocode/mbedComp/common -I/Developer/Qt/5.4/clang_64/lib/QtWidgets.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtGui.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtNetwork.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtCore.framework/Headers -F/Developer/Qt/5.4/clang_64/lib ../../emuno/virtual_display.h -o moc_virtual_display.cpp

moc_mbed_timer.cpp: ../../mbedComp/hal/ticker_api.h \
		../../emuno/vmbed/target_emuno/device.h \
		../../emuno/vmbed/target_emuno/objects.h \
		../../emuno/vmbed/target_emuno/PinNames.h \
		../../emuno/vmbed/target_emuno/gpio_object.h \
		../../emuno/vmbed/project.h \
		../../mbedComp/hal/us_ticker_api.h \
		../../mbedcomp/hal/ticker_api.h \
		/Developer/Qt/5.4/clang_64/lib/QtCore.framework/Versions/5/Headers/QTimer \
		/Developer/Qt/5.4/clang_64/lib/QtCore.framework/Versions/5/Headers/QDebug \
		../../emuno/vmbed/target_emuno/mbed_timer.h
	/Developer/Qt/5.4/clang_64/bin/moc $(DEFINES) -D__APPLE__ -D__GNUC__=4 -I/Developer/Qt/5.4/clang_64/mkspecs/macx-clang -I/Users/ka/Dropbox/monocode/welcome_mono/simulate -I/Users/ka/Dropbox/monocode/emuno -I/Users/ka/Dropbox/monocode/emuno/vmbed -I/Users/ka/Dropbox/monocode/emuno/vmbed/target_emuno -I/Users/ka/Dropbox/monocode/mono_framework -I/Users/ka/Dropbox/monocode/mono_framework/display -I/Users/ka/Dropbox/monocode/mono_framework/display/ui -I/Users/ka/Dropbox/monocode/mbedComp/api -I/Users/ka/Dropbox/monocode/mbedComp/hal -I/Users/ka/Dropbox/monocode/mbedComp/common -I/Developer/Qt/5.4/clang_64/lib/QtWidgets.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtGui.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtNetwork.framework/Headers -I/Developer/Qt/5.4/clang_64/lib/QtCore.framework/Headers -F/Developer/Qt/5.4/clang_64/lib ../../emuno/vmbed/target_emuno/mbed_timer.h -o moc_mbed_timer.cpp

compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_rez_source_make_all:
compiler_rez_source_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

