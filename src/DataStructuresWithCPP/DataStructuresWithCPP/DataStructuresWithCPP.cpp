// DataStructuresWithCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "Stack.h"
#include "Printer.h"

using namespace std;

int main()
{
    //vector<int> numbers { 10, 8, 5, 7, 3, 4, 1, 6, 2, 9 };

    /*BubbleSort bubbleSort;
    bubbleSort.Sort(numbers);*/

    /*SelectionSort selectionSort;
    selectionSort.Sort(numbers);*/

    /*InsertionSort insertionSort;
    insertionSort.Sort(numbers);*/

    /*Printer printer;
    printer.Print(numbers);*/

    Stack stack;
    stack.Add(10);
    stack.Add(5);
    stack.Add(3);
    stack.Add(7);

    stack.Show();
    stack.ShowAll();

    stack.Remove();
    stack.Show();
    stack.ShowAll();
}
