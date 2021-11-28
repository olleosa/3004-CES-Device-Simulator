#include "battery.h"

Battery::Battery()
{
}

int Battery::getLevel() const
{
    return level;
}

void Battery::setLevel(int value)
{
    level = value;
}
