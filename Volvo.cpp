#include "Volvo.h"

Volvo::Volvo() {
    fuelCapacity = 60;
    fuelConsumption = 5;
    averageSpeed[static_cast<int>(Weather::Sunny)] = 100;
    averageSpeed[static_cast<int>(Weather::Rain)] = 90;
    averageSpeed[static_cast<int>(Weather::Snow)] = 80;
}

void Volvo::SetFuelCapacity(double fc) { 
    fuelCapacity = fc; 
}
void Volvo::SetFuelConsumption(double fc) { 
    fuelConsumption = fc; 
}
void Volvo::SetAverageSpeed(Weather weather, double speed) { 
    averageSpeed[static_cast<int>(weather)] = speed; 
}
double Volvo::GetFuelCapacity() const { 
    return fuelCapacity; 
}
double Volvo::GetFuelConsumption() const { 
    return fuelConsumption; 
}
double Volvo::GetAverageSpeed(Weather weather) const { 
    return averageSpeed[static_cast<int>(weather)]; 
}
const char* Volvo::GetName() const { 
    return "Volvo"; 
}