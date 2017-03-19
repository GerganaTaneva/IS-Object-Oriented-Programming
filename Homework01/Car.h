#pragma once
#include "Tank.h"
#include "Engine.h"
#include "Transmission.h"
#include <iostream>

using namespace std;

class Car
{
private:
    int numSeats;
    int yearMade;
    Engine engine;
    Tank tank;
    Transmission transmission;
public:
    Car();
    Car(int numSeats, int yearMade, Engine &engine, Tank &tank, Transmission &transmission);

    void setNumSeats(int numSeats);
    void setYearMade(int yearMade);
    void setEngine(Engine &engine);
    void setTank(Tank &tank);
    void setTransmission(Transmission &transmission);

    int getNumSeats() const;
    int getYearMade() const;
    Engine& getEngine();
    Tank& getTank();
    Transmission& getTransmission();

    double calcTax();
    double calcGear(int speed);
    double calculateEmissions();
    double fuelConsumption();
    double maxAvailablePath();
};
