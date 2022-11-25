// DataStructuresWithCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <filesystem>

#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "QuickSort.h"
#include "QuickSelect.h"
#include "Stack.h"
#include "Queue.h"
#include "Factorial.h"
#include "Fibonacci.h"
#include "DirectoryFinder.h"
#include "MaxNumber.h"
#include "Printer.h"

using namespace std;
namespace fs = std::filesystem;

void RunSorting()
{
    //vector<int> numbers { 10, 8, 5, 7, 3, 4, 1, 6, 2, 9 };
    vector<int> numbers { 0, 5, 2, 1, 6, 3 };

    /*cout << "Running Bubble Sort \n";
    BubbleSort bubbleSort;
    bubbleSort.Sort(numbers);*/

    /*cout << "Running Selection Sort \n";
    SelectionSort selectionSort;
    selectionSort.Sort(numbers);*/

    /*cout << "Running Insertion Sort \n";
    InsertionSort insertionSort;
    insertionSort.Sort(numbers);*/

    /*Printer printer;
    printer.Print(numbers);*/

    cout << "Running Quick Sort \n";
    QuickSort quickSort;
    numbers = quickSort.Sort(numbers);

    Printer printer;
    printer.Print(numbers);
}

void RunSelection()
{
    vector<int> numbers{ 10, 5, 2, 1, 6, 3 };

    cout << "Running Quick Select \n";
    auto lowestValuePosition = 5;
    QuickSelect quickSelect;
    auto result = quickSelect.SelectLowest(numbers, lowestValuePosition - 1);
    cout << "The " << lowestValuePosition << " lowest value is : " << result;
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
    /*auto number = 5;
    Factorial factorial;
    long factorialResult = factorial.Run(number);
    cout << "Factorial of " << number << " is: " << factorialResult;*/


    /*auto number = 9;
    Fibonacci fibonacci;
    long fibonacciResult = fibonacci.Run(number);
    cout << "Fibonacci of " << number << " is: " << fibonacciResult;*/

    /*DirectoryFinder directoryFinder;
    directoryFinder.FindSubdirectories(fs::current_path().string());*/

    MaxNumber maxNumber;
    auto result = maxNumber.Run(vector<int>{2, 8, 10, 4, 5});
    cout << "Max number is: " << result;
}

int main()
{
    //RunSorting();

    RunSelection();

    //RunListing();

    //RunRecursion();
}
