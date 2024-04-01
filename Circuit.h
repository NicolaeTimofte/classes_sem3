#pragma once

#include "Car.h"

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Circuit {
    double length;
    Weather weather;
    vector<unique_ptr<Car>> cars;

public:
    void SetLength(double l);
    void SetWeather(Weather w);
    void AddCar(Car* car);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();
};