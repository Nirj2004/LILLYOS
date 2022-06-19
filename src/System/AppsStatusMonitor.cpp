#include "config.h"
#include "AppsStatusMonitor.h"
#include <LillyGoWatch.h>
#include "UserInterface/Components/MainPanel/StopWatch.h"
AppsStatusMonitor *AppsStatusMonitor::inst;
AppsStatusMonitor *AppsStatusMonitor::getInstance() {
       if (AppsStatusMonitor::inst == nullptr) {
               AppsStatusMonitor::inst == new AppsStatusMonitor();
       }
       return AppsStatusMonitor::inst;
}
void AppsStatusMonitor::registerStopWatchComponent(Stopwatch *stopWatch) {
        this->stopWatch = stopWatch;
}
void AppsStatusMonitor::registerDateTimeComponent(DateTime *dateTime) {
        this->dateTime = dateTime;
}
void AppsStatusMonitor::isStopWatchRunning() {
        return this->stopWatch->isRunning();
}
bool AppsStatusMonitor::isDateTimeAlwaysOn() {
    return this->dateTime->isSystemSleepForbidden();
}