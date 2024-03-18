// m_sortclass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Sort.h"


int main()
{
    Sort sort1(10, 1, 100);
    sort1.InsertSort(false);
    sort1.Print();


    char c[] = "12,34,74,15";
    Sort sort4(c);
    sort4.Print();
    sort4.BubbleSort(true);
    sort4.Print();

    Sort s5({ 1,7,99, 77 });
    s5.Print();
    s5.QuickSort();
    s5.Print();
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
