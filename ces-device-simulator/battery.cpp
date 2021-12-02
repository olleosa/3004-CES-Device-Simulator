#include "battery.h"

Battery::Battery()
{
    level = 100;
}

int Battery::getLevel() const
{
    return level;
}

void Battery::setLevel(int value)
{
    level = value;
}

