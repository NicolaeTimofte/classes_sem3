#include "Maserati.h"

Maserati::Maserati() {
    fuelCapacity = 60.188;
    fuelConsumption = 1991.8;
    averageSpeed[static_cast<int>(Weather::Sunny)] = 220;
    averageSpeed[static_cast<int>(Weather::Rain)] = 170;
    averageSpeed[static_cast<int>(Weather::Snow)] = 380;
}

void Maserati::SetFuelCapacity(double fc) {
    fuelCapacity = fc;
}
void Maserati::SetFuelConsumption(double fc) {
    fuelConsumption = fc;
}
void Maserati::SetAverageSpeed(Weather weather, double speed) {
    averageSpeed[static_cast<int>(weather)] = speed;
}
double Maserati::GetFuelCapacity() const {
    return fuelCapacity;
}
double Maserati::GetFuelConsumption() const {
    return fuelConsumption;
}
double Maserati::GetAverageSpeed(Weather weather) const {
    return averageSpeed[static_cast<int>(weather)];
}
const char* Maserati::GetName() const {
    return "Maserati";
}