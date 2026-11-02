#include <iostream>
#include "ElectricWaterHeater.h"
#include "GasWaterHeater.h"

int main() {
    ElectricWaterHeater electric("Electric heater");
    GasWaterHeater gas("Gas heater");

    electric.thermostat.target = 55;
    gas.thermostat.target = 55;

    electric.turnOn();
    gas.turnOn();

    WaterHeater* h1 = &electric;
    WaterHeater* h2 = &gas;

    h1->heat(30);
    h2->heat(30);
    h1->printInfo();
    h2->printInfo();

    h1->heat(60);
    h2->heat(60);
    h1->printInfo();
    h2->printInfo();

    return 0;
}