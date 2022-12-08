// DataStructuresWithCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <filesystem>
#include <string> 

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
#include "BinarySearchTree.h"

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
	auto lowestValuePosition = 4;
	QuickSelect quickSelect;
	auto result = quickSelect.selectLowest(numbers, lowestValuePosition - 1);
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
	long factorialResult = factorial.run(number);
	cout << "Factorial of " << number << " is: " << factorialResult;*/

	/*auto number = 9;
	Fibonacci fibonacci;
	long fibonacciResult = fibonacci.run(number);
	cout << "Fibonacci of " << number << " is: " << fibonacciResult;*/

	/*DirectoryFinder directoryFinder;
	directoryFinder.findSubdirectories(fs::current_path().string());*/

	MaxNumber maxNumber;
	auto result = maxNumber.run(vector<int>{2, 8, 10, 4, 5});
	cout << "Max number is: " << result;
}

void RunTree()
{
	BinarySearchTree binarySearchTree;
	binarySearchTree.insert(5);
	binarySearchTree.insert(10);
	binarySearchTree.insert(15);
	binarySearchTree.insert(4);
	binarySearchTree.insert(3);
	binarySearchTree.insert(8);
	binarySearchTree.insert(20);
	binarySearchTree.insert(25);
	binarySearchTree.insert(14);
	binarySearchTree.insert(12);
	binarySearchTree.insert(17);
	binarySearchTree.insert(18);

	auto node = binarySearchTree.search(17);
	cout << "The searched node is: " << node->value << "\n";
	cout << (node->leftChild != nullptr ? "Its left child is: " + to_string(node->leftChild->value) : "No left child") << "\n";
	cout << (node->rightChild != nullptr ? "Its right child is: " + to_string(node->rightChild->value) : "No right child") << "\n";

	binarySearchTree.remove(15);
	/*cout << "The searched node is: " << node->value << "\n";
	cout << (node->leftChild != nullptr ? "Its left child is: " + to_string(node->leftChild->value) : "No left child") << "\n";
	cout << (node->rightChild != nullptr ? "Its right child is: " + to_string(node->rightChild->value) : "No right child") << "\n";*/



	auto node2 = binarySearchTree.search(20);
	cout << "The searched node is: " << node2->value << "\n";
	cout << (node2->leftChild != nullptr ? "Its left child is: " + to_string(node2->leftChild->value) : "No left child") << "\n";
	cout << (node2->rightChild != nullptr ? "Its right child is: " + to_string(node2->rightChild->value) : "No right child") << "\n";
}

int main()
{
	//RunSorting();

	//RunSelection();

	//RunListing();

	//RunRecursion();

	RunTree();
}
