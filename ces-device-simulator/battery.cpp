#include "battery.h"

Battery::Battery()
{
    level = 100;
}

double Battery::getLevel() const
{
    return level;
}

void Battery::setLevel(double value)
{
    level = value;
    emit updateBatteryLevel(level);
    if (level <= 5){
        emit lowBattery(level);
    }
}

void Battery::decreaseBattery(){
    setLevel(level - 0.1);
}

