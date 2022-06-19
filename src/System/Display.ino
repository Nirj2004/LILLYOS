#include "config.h"
#include "Display.h"
#include <LillyGoWatch.h>
#include "UserInterface/UserInterfaceManager.h"
#include "Utils/TimeUtil.h"
Display *Display::inst;
Display *Display::getInstance() {
        if (Display::inst == nullptr) {
                Display::inst = new Display();
        }
        return Display::inst;
}
void Display::init() {
         TTGOClass::getWatch()->openBL();
         TTGOClass::getWatch()->bl->adjust(DISPLAY_ADJUST);
         TTGOClass::getWatch()->ips->setTextColor(COLOR_MAIN_1);
}
bool Display::isDisplayOn() {
        return this->lastOn > 0;
}
void Display::turnDisplayOff() {
        if (isDisplayOn()) {
                 TTGOClass::getWatch()->displaySleep();
                 TTGOClass::getWatch()->bl->off();
                 this->lastOn = 0;
        }
}
void Display::turnOnDisplayOn() {
        if (isDisplayOn()) {
                UserInterfaceManager::getInstance()->render();
                TTGOClass::getWatch()->bl->on();
                TTGOClass::getWatch()->displayWakeup();
                this->lastOn = TimeUtil::getCurrentTimeInSeconds();
        }
}