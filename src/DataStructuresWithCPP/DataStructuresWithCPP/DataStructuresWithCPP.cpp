// DataStructuresWithCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "Stack.h"
#include "Queue.h"
#include "Factorial.h"
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
    cout << "Running Stack \n";
    Stack stack;
    stack.Push(10);
    stack.Push(5);
    stack.Push(3);
    stack.Push(7);

    stack.Read();
    stack.ReadAll();

    stack.Pop();
    stack.Read();
    stack.ReadAll();

    stack.PopAll();


    //cout << "Running Queue \n";
    //Queue queue;
    //queue.Enqueue(10);
    //queue.Enqueue(5);
    //queue.Enqueue(3);
    //queue.Enqueue(7);

    //queue.Read();
    //queue.ReadAll();

    //queue.Dequeue();
    //queue.Read();
    //queue.ReadAll();

    //queue.DequeueAll();
}

void RunRecursion()
{
    auto number = 5;
    Factorial factorial;
    long factorialResult = factorial.Run(number);
    cout << "Factorial of " << number << " is " << factorialResult;
}

int main()
{
    //RunSorting();

    //RunListing();

    RunRecursion();
}
