#include "Transmission.h"

Transmission::Transmission()
{
    this-> type = MANUAL;
    this-> gearLevel = 0;
}
Transmission::Transmission(typeTrans newType, int gearLevel)
{
    this-> type = newType;
    this-> gearLevel = gearLevel;
}

void Transmission::setType(typeTrans Type)
{
    this-> type = Type;
}
void Transmission::setGearLevel(int gearLevel)
{
    this-> gearLevel = gearLevel;
}

typeTrans Transmission::getType()
{
    return this-> type;
}
int Transmission::getGearLevel()
{
    return this-> gearLevel;
}
