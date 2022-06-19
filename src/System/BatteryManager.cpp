#include "config.h"
#include "BatteryManager.h"
#include <LillyGoWatch.h>
#include <WiFi.h>
BatteryManager* BatteryManager::inst;
BatteryManager *BatteryManager::getInstance() {
       if (BatteryManager::inst == nullptr) {
               BatteryManager::inst = new BatteryManager();
       }
       return BatteryManager::inst;
}
uint8_t BatteryManager::getCapacity() {
        int capacity = (int)(TTGOClass::getWatch()->power->BattVoltage()       - BATTERY_LOW_CAPACITY) * 100 / (BATTERY_FULL_CAPACITY - BATTERY_LOW_CAPACITY);
        capacity = min(100, capacity);
        capacity = max(0, capacity);
        return (unit8_t)capacity;
}
bool BatteryManager::isCharging() {
    return TTGOClass::getWatch()->power->isCharging();
}
bool BatteryManager::handleCablePlugInIRQ() {
         return (
                 TTGOClass::getWatch()->power->isVbusPlugInIRQ()
                 || TTGOClass::getWatch()->isAcinPlugInIRQ()
         );
}
bool BatteryManager::handleCablePlugRemoveIRQ() {
         return (
                 TTGOClass::getWatch()->power->isVbusRemoveIRQ()
                 || TTGOClass::getWatch()->power->isAcinRemoveIRQ()
         );
}
void BatteryManager::energyConsumptionSavingsSettings() {
        WiFi.disconnect(true);
        WiFi.mode(WIFI_OFF);
        setCpuFrequencyMhz(CPU_FREQUENCY);
}
BatteryManager::BatteryManager() {
    
}