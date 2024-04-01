#include "Circuit.h"

#include <algorithm>
#include <iostream>

using namespace std;

void Circuit::SetLength(double l) { 
    length = l; 
}
void Circuit::SetWeather(Weather w) { 
    weather = w; 
}
void Circuit::AddCar(Car* car) { 
    cars.push_back(unique_ptr<Car>(car)); 
}

void Circuit::Race() {
    vector<pair<double, Car*>> finishingTimes;
    vector<pair<double, Car*>> unfinishingTimes;
    for (size_t i = 0; i < cars.size(); i++)
    {
        double speed = cars[i]->GetAverageSpeed(weather);
        double range = (cars[i]->GetFuelCapacity() / cars[i]->GetFuelConsumption()) * 100;
        double time = length / speed;
        if (range >= length)
        {
            finishingTimes.push_back(make_pair(time, cars[i].get()));
        }
        else
        {
            unfinishingTimes.push_back(make_pair(time, cars[i].get()));
        }
    }

    sort(finishingTimes.begin(), finishingTimes.end());
    sort(unfinishingTimes.begin(), unfinishingTimes.end());

    for (size_t i = 0; i < finishingTimes.size(); i++)
    {
        cout << finishingTimes[i].second->GetName() << " " << finishingTimes[i].first;
        if (i == 0)
            cout << " Superstar **";
        cout << endl;
    }
    cout << endl;
    for (size_t i = 0; i < unfinishingTimes.size(); i++)
    {
        if (i == 0)
            cout << "Losers Queue" << endl;
        cout << unfinishingTimes[i].second->GetName();
        //cout << " " << finishingTimes[i].first;
        cout << endl;
    }

}

void Circuit::ShowFinalRanks() {
    // inclusa sus
}

void Circuit::ShowWhoDidNotFinish() {
    // inclusa sus 2
}