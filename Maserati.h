#pragma once
#include "Car.h"

class Maserati : public Car{
public:
    Maserati();
    void SetFuelCapacity(double fc) override;
    void SetFuelConsumption(double fc) override;
    void SetAverageSpeed(Weather weather, double speed) override;
    double GetFuelCapacity() const override;
    double GetFuelConsumption() const override;
    double GetAverageSpeed(Weather weather) const override;
    const char* GetName() const override;
};