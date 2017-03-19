#include "Car.h"

Car::Car()
{
    this-> numSeats = 0;
    this-> yearMade = 0;
}
Car::Car(int numSeats, int yearMade, Engine &engine, Tank &tank, Transmission &transmission)
{
    this-> numSeats = numSeats;
    this-> yearMade = yearMade;
    this-> engine = engine;
    this-> tank = tank;
    this-> transmission = transmission;
}

void Car::setNumSeats(int numSeats)
{
    this-> numSeats = numSeats;
}
void Car::setYearMade(int yearMade)
{
    this-> yearMade = yearMade;
}
void Car::setEngine(Engine &engine)
{
    this-> engine = engine;
}
void Car::setTank(Tank &tank)
{
    this-> tank = tank;
}
void Car::setTransmission(Transmission &transmission)
{
    this-> transmission = transmission;
}

int Car::getNumSeats() const
{
    return this-> numSeats;
}
int Car::getYearMade() const
{
    return this-> yearMade;
}

Engine& Car::getEngine()
{
    return this-> engine;
}
Tank& Car::getTank()
{
    return this-> tank;
}
Transmission& Car::getTransmission()
{
    return this-> transmission;
}


double Car::calcTax()
{
    double tax = 1;
    if(yearMade < 2003)
    {
        tax *= 1;
    }
    else if(yearMade >= 2003 && yearMade <= 2012)
    {
        tax *= 1.5;
    }
    else
        tax *= 2.8;
    if(this-> engine.getHp() <= 105)
    {
        return tax * this-> engine.getHp() * 0.80;
    }
    else
        return tax * this-> engine.getHp() * 0.90;
}
double Car::calcGear(int speed)
{
    if(speed >= 0 && speed <= 20)
    {
        return 1;
    }
    else if(speed > 20 && speed <= 30)
    {
        return 2;
    }
    else if(speed > 30 && speed <= 50)
    {
        return 3;
    }
    else if(speed > 50 && speed <= 80)
    {
        return 4;
    }
    else if(speed > 80 && speed <= 200)
    {
        return 5;
    }
    else
    {
        return 6;
    }
}
double Car::calculateEmissions()
{
    typeEngine k = this-> engine.getType();
    return this-> engine.getHp() * this-> engine.getVolume() * k;
}
double Car::fuelConsumption()
{
    return (this-> transmission.getGearLevel() * this-> engine.getHp() * this-> engine.getVolume() / 1000) / 100;
}

double Car::maxAvailablePath()
{
    double dev = this-> tank.getCapacity() / fuelConsumption();
    return dev * 100;
}
