#pragma once
#include "TypeTransmission.h"

class Transmission
{
private:
    typeTrans type;
    int gearLevel;
public:
    Transmission();
    Transmission(typeTrans newType, int gearLevel);

    void setType(typeTrans Type);
    void setGearLevel(int gearLevel);

    typeTrans getType();
    int getGearLevel();
};
