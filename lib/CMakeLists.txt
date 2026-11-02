add_library(water_heater_lib
    src/Thermostat.cpp
    src/WaterHeater.cpp
    src/ElectricWaterHeater.cpp
    src/GasWaterHeater.cpp
)

target_include_directories(water_heater_lib PUBLIC include)