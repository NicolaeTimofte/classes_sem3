#define _CRT_SECURE_NO_WARNINGS

#include "Circuit.h"
#include "Volvo.h"
#include "Maserati.h"

#include <iostream>

int main()
{
	Circuit c;
	c.SetLength(100);
	c.SetWeather(Weather::Rain);
	c.AddCar(new Volvo());
	c.AddCar(new Maserati());
	//c.AddCar(new Seat());
	//c.AddCar(new Fiat());
	//c.AddCar(new RangeRover());
	c.Race();
	//c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the slowest.
	//c.ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit
	return 0;
}
