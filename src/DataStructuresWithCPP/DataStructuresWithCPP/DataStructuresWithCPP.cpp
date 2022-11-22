// DataStructuresWithCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include "BubbleSort.h"
#include "SelectionSort.h"
#include "Printer.h"

using namespace std;

int main()
{
    vector<int> numbers { 10, 8, 5, 7, 3, 4, 1, 6, 2, 9 };
    /*vector<int> numbers { 1, 2, 3, 4 };*/

    /*BubbleSort bubbleSort;
    bubbleSort.Sort(numbers);*/

    SelectionSort selectionSort;
    selectionSort.Sort(numbers);

    Printer printer;
    printer.Print(numbers);
}
