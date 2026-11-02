#pragma once
#include "WaterHeater.h"

class GasWaterHeater : public WaterHeater {
public:
    GasWaterHeater(std::string n);
    void heat(int minutes);
};