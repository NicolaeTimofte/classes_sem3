// canvas_m.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Canvas.h"
#include <iostream>

int main()
{
    Canvas canvas(30, 20);

    canvas.DrawLine(0, 0, 10, 10, '*');
    canvas.Print();
    canvas.Clear();
    canvas.SetPoint(18, 8, '+');
    canvas.Print();
    canvas.Clear();
    canvas.DrawRect(1,2,4,6,'+');
    canvas.FillRect(1, 2, 4, 6, '!');
    canvas.Print();
    canvas.Clear();
    canvas.DrawCircle(6, 6, 3, '+');
    //canvas.FillCircle(6, 6, 3, '!');
    canvas.Print();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
