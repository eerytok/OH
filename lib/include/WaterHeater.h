#pragma once
#include <string>
#include "Thermostat.h"

class WaterHeater {
public:
    std::string name;
    double temp;
    bool on;
    Thermostat thermostat;

    WaterHeater(std::string n);
    void turnOn();
    void turnOff();
    void printInfo();
    virtual void heat(int minutes);
};