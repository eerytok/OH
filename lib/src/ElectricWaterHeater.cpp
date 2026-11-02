#include "ElectricWaterHeater.h"

ElectricWaterHeater::ElectricWaterHeater(std::string n) : WaterHeater(n) {
}

void ElectricWaterHeater::heat(int minutes) {
    if (on == false) return;

    temp = temp + minutes * 1;

    if (temp > thermostat.target) {
        temp = thermostat.target;
    }
}