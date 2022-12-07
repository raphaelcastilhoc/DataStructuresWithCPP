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
#include "LinkedList.h"
#include "DoublyLinkedList.h"
#include "Factorial.h"
#include "Fibonacci.h"
#include "DirectoryFinder.h"
#include "MaxNumber.h"

using namespace std;
namespace fs = std::filesystem;

void RunSorting()
{
	//vector<int> numbers { 10, 8, 5, 7, 3, 4, 1, 6, 2, 9 };
	vector<int> numbers{ 0, 5, 2, 1, 6, 3 };

	/*cout << "Running Bubble Sort \n";
	BubbleSort bubbleSort;
	bubbleSort.sort(numbers);*/

	/*cout << "Running Selection Sort \n";
	SelectionSort selectionSort;
	selectionSort.sort(numbers);*/

	/*cout << "Running Insertion Sort \n";
	InsertionSort insertionSort;
	insertionSort.sort(numbers);*/

	cout << "Running Quick Sort \n";
	QuickSort quickSort;
	numbers = quickSort.sort(numbers);

	for (int number : numbers)
	{
		cout << number << " ";
	}
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
	/*cout << "Running Stack \n";
	Stack stack;
	stack.push(10);
	stack.push(5);
	stack.push(3);
	stack.push(7);

	stack.read();
	stack.readAll();

	stack.pop();
	stack.read();
	stack.readAll();

	stack.popAll();*/


	/*cout << "Running Queue \n";
	Queue queue;
	queue.enqueue(10);
	queue.enqueue(5);
	queue.enqueue(3);
	queue.enqueue(7);

	queue.read();
	queue.readAll();

	queue.dequeue();
	queue.read();
	queue.readAll();

	queue.dequeueAll();*/


	//cout << "Running Linked List \n";
	//LinkedList linkedList;
	//linkedList.push(10);
	//linkedList.push(5);
	//linkedList.push(3);
	//linkedList.push(7);

	//linkedList.read(1);
	//linkedList.readAll();

	//linkedList.push(8, make_shared<int>(0));
	//linkedList.push(9, make_shared<int>(4));
	//linkedList.push(2, make_shared<int>(10));

	//linkedList.remove(0);
	////linkedList.remove(2);

	//linkedList.readAll();


	//cout << "Running Doubly Linked List \n";
	//DoublyLinkedList doublyLinkedList;
	//doublyLinkedList.push(10);
	//doublyLinkedList.push(5);
	//doublyLinkedList.push(3);
	//doublyLinkedList.push(7);

	////doublyLinkedList.read(1);
	//doublyLinkedList.readAll();

	////doublyLinkedList.push(9, make_shared<int>(10));
	////doublyLinkedList.push(9, make_shared<int>(0));
	////doublyLinkedList.push(9, make_shared<int>(2));

	///*doublyLinkedList.read(2);
	//doublyLinkedList.readAll();*/

	//doublyLinkedList.remove(make_shared<int>(2));
	//doublyLinkedList.remove(make_shared<int>(0));

	//doublyLinkedList.readAll();

	//doublyLinkedList.push(4);
	//doublyLinkedList.push(8);
	//doublyLinkedList.push(0, make_shared<int>(0));

	//doublyLinkedList.readAll();
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
	RunSorting();

	//RunSelection();

	//RunListing();

	//RunRecursion();
}
