#pragma once
#include "WaterHeater.h"

class ElectricWaterHeater : public WaterHeater {
public:
    ElectricWaterHeater(std::string n);
    void heat(int minutes);
};