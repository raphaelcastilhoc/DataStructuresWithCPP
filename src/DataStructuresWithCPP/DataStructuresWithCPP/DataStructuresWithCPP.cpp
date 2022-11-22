// DataStructuresWithCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include "BubbleSort.h"
#include "Printer.h"

using namespace std;

int main()
{
    vector<int> numbers { 5, 3, 4, 1, 2 };

    BubbleSort bubblesort;
    bubblesort.Sort(numbers);

    Printer printer;
    printer.Print(numbers);
}
