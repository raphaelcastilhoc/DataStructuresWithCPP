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
#include "Heap.h"
#include "Trie.h"
#include "DepthFirstSearching.h"

void RunSorting()
{
	std::vector<int> numbers { 10, 8, 5, 7, 3, 4, 1, 6, 2, 9 };
	//std::vector<int> numbers{ 0, 5, 2, 1, 6, 3 };

	/*std::cout << "Running Bubble Sort \n";
	BubbleSort bubbleSort;
	bubbleSort.sort(numbers);*/

	/*std::cout << "Running Selection Sort \n";
	SelectionSort selectionSort;
	selectionSort.sort(numbers);*/

	std::cout << "Running Insertion Sort \n";
	InsertionSort insertionSort;
	insertionSort.sort(numbers);

	/*std::cout << "Running Quick Sort \n";
	QuickSort quickSort;
	numbers = quickSort.sort(numbers);*/

	for (int number : numbers)
	{
		std::cout << number << " ";
	}
}

void RunSelection()
{
	std::vector<int> numbers{ 10, 5, 2, 1, 6, 3 };

	std::cout << "Running Quick Select \n";
	auto lowestValuePosition = 4;
	QuickSelect quickSelect;
	auto result = quickSelect.selectLowest(numbers, lowestValuePosition - 1);
	std::cout << "The " << lowestValuePosition << " lowest value is : " << result;
}

void RunListing()
{
	std::cout << "Running Stack \n";
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

	stack.popAll();


	/*std::cout << "Running Queue \n";
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


	//std::cout << "Running Linked List \n";
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


	//std::cout << "Running Doubly Linked List \n";
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
	std::cout << "Factorial of " << number << " is: " << factorialResult;*/

	/*auto number = 9;
	Fibonacci fibonacci;
	long fibonacciResult = fibonacci.run(number);
	std::cout << "Fibonacci of " << number << " is: " << fibonacciResult;*/

	/*DirectoryFinder directoryFinder;
	directoryFinder.findSubdirectories(std::filesystem::current_path().string());*/

	/*MaxNumber maxNumber;
	auto result = maxNumber.run(vector<int>{2, 8, 10, 4, 5});
	std::cout << "Max number is: " << result;*/
}

void RunTree()
{
	BinarySearchTree binarySearchTree;
	binarySearchTree.insert(5);
	binarySearchTree.insert(10);
	binarySearchTree.insert(15);
	binarySearchTree.insert(3);
	binarySearchTree.insert(4);
	binarySearchTree.insert(2);
	binarySearchTree.insert(9);
	binarySearchTree.insert(20);
	binarySearchTree.insert(19);
	binarySearchTree.insert(18);
	binarySearchTree.insert(14);
	binarySearchTree.insert(21);

	binarySearchTree.readAll();

	binarySearchTree.search(20);

	binarySearchTree.remove(15);

	binarySearchTree.readAll();


	/*Heap heap;
	heap.insert(100);
	heap.insert(90);
	heap.insert(80);
	heap.insert(70);
	heap.insert(60);
	heap.insert(110);
	heap.insert(40);
	heap.insert(30);
	heap.insert(20);
	heap.insert(10);

	heap.remove();*/


	/*Trie trie;
	trie.insert("act");
	trie.insert("cat");
	trie.insert("can");
	trie.insert("actor");
	trie.insert("zoo");
	trie.insert("zombie");
	trie.insert("zoom");
	trie.insert("zone");

	while (std::cin)
	{
		std::cout << "Type a word: ";

		std::string word;
		std::cin >> word;

		if (word == "-1")
		{
			break;
		}

		auto wordExists = trie.checkIfWordExists(word);
		std::cout << "The word exists? " << (wordExists ? "Yes" : "No") << "\n\n";

		auto words = trie.autocomplete(word);

		std::cout << "The auto completed words are:\n";
		for (auto word : words)
		{
			std::cout << word << "\n";
		}

		std::cout << "\n";
	}*/
}

void RunGraph()
{
	DepthFirstSearching depthFirstSearching;
	
	auto rootVertex = std::make_shared<DepthFirstSearching::Vertex>(DepthFirstSearching::Vertex{ "Raphael" });
	auto firstVertex = std::make_shared<DepthFirstSearching::Vertex>(DepthFirstSearching::Vertex{ "John" });
	auto secondVertex = std::make_shared<DepthFirstSearching::Vertex>(DepthFirstSearching::Vertex{ "Gabi" });
	auto thirdVertex = std::make_shared<DepthFirstSearching::Vertex>(DepthFirstSearching::Vertex{ "Mary" });
	auto fourthVertex = std::make_shared<DepthFirstSearching::Vertex>(DepthFirstSearching::Vertex{ "Arthur" });

	rootVertex->addAdjacentVertex(firstVertex);
	rootVertex->addAdjacentVertex(thirdVertex);
	rootVertex->addAdjacentVertex(fourthVertex);

	secondVertex->addAdjacentVertex(thirdVertex);
	secondVertex->addAdjacentVertex(fourthVertex);

	fourthVertex->addAdjacentVertex(firstVertex);
	fourthVertex->addAdjacentVertex(secondVertex);

	auto searchedVertext = depthFirstSearching.search(rootVertex, std::make_shared<std::string>("Gabi"));
	if (searchedVertext != nullptr)
	{
		std::cout << "Adjacent vertices from searched vertex " << searchedVertext->name << ":\n";
		for (auto adjacentVertice : searchedVertext->adjacentVertices)
		{
			std::cout << adjacentVertice->name << "\n";
		}
	}
	else
	{
		std::cout << "None adjacent vertex found.\n";
	}
}

int main()
{
	//RunSorting();

	//RunSelection();

	//RunListing();

	//RunRecursion();

	//RunTree();

	RunGraph();
}