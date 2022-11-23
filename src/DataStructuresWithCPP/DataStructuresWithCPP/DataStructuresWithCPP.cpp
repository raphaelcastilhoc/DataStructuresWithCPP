// DataStructuresWithCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "Stack.h"
#include "Queue.h"
#include "Printer.h"

using namespace std;

void RunSorting()
{
    vector<int> numbers { 10, 8, 5, 7, 3, 4, 1, 6, 2, 9 };

    /*cout << "Running Bubble Sort \n";
    BubbleSort bubbleSort;
    bubbleSort.Sort(numbers);*/

    /*cout << "Running Selection Sort \n";
    SelectionSort selectionSort;
    selectionSort.Sort(numbers);*/

    cout << "Running Insertion Sort \n";
    InsertionSort insertionSort;
    insertionSort.Sort(numbers);

    Printer printer;
    printer.Print(numbers);
}

void RunListing()
{
    /*cout << "Running Stack \n";
    Stack stack;
    stack.Push(10);
    stack.Push(5);
    stack.Push(3);
    stack.Push(7);

    stack.Show();
    stack.ShowAll();

    stack.Pop();
    stack.Show();
    stack.ShowAll();*/


    cout << "Running Queue \n";
    Queue queue;
    queue.Enqueue(10);
    queue.Enqueue(5);
    queue.Enqueue(3);
    queue.Enqueue(7);

    queue.Show();
    queue.ShowAll();

    queue.Unqueue();
    queue.Show();
    queue.ShowAll();
}

int main()
{
    //RunSorting();

    RunListing();
}
