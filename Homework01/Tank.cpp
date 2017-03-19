#include "Tank.h"

Tank::Tank()
{
    this-> capacity = 0;
}
Tank::Tank(int capacity)
{
    this-> capacity = capacity;
}

void Tank::setCapacity(int capacity)
{
    this-> capacity = capacity;
}
int Tank::getCapacity() const
{
    return this-> capacity;
}
