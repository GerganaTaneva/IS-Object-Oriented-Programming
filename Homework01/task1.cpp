#include "Car.h"
#include <iostream>

using namespace std;

int main()
{
    Tank tank(100);
    Engine engine(90, 1900, GASOLINE);
    Transmission transmission(MANUAL, 4);
    Car opel(5, 2003, engine, tank, transmission);
    cout << "Tax: " << opel.calcTax() << endl;
    cout << "Gear: " << opel.calcGear(60) << endl;
    cout << "Emissions: " << opel.calculateEmissions() << endl;
    cout << "Fuel consumption: " << opel.fuelConsumption() << endl;
    cout << "Max available path: " << opel.maxAvailablePath() << endl;
    return 0;
}
