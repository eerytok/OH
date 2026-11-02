#include "GasWaterHeater.h"

GasWaterHeater::GasWaterHeater(std::string n) : WaterHeater(n) {
}

void GasWaterHeater::heat(int minutes) {
    if (on == false) return;

    temp = temp + minutes * 0.5;

    if (temp > thermostat.target) {
        temp = thermostat.target;
    }
}