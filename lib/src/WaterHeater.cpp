#include "WaterHeater.h"
#include <iostream>

WaterHeater::WaterHeater(std::string n) {
    name = n;
    temp = 15;
    on = false;
}

void WaterHeater::turnOn() {
    on = true;
}

void WaterHeater::turnOff() {
    on = false;
}

void WaterHeater::heat(int minutes) {
}

void WaterHeater::printInfo() {
    std::cout << name << ": temp = " << temp << ", target = " << thermostat.target << std::endl;
}