#include "QuickSort.h"

vector<int> elements;

void SwapPositions(int& firstNumber, int& secondNumber)
{
	auto tempNumber = firstNumber;
	firstNumber = secondNumber;
	secondNumber = tempNumber;
}

int Partition(int leftPointer, int rightPointer)
{
	auto pivotIndex = rightPointer;
	auto pivotValue = elements[pivotIndex];

	rightPointer -= 1;

	while (true)
	{
		while (elements[leftPointer] < pivotValue)
		{
			leftPointer += 1;
		}

		while (elements[rightPointer] > pivotValue)
		{
			rightPointer -= 1;
		}

		if (leftPointer >= rightPointer)
		{
			break;
		}

		SwapPositions(elements[leftPointer], elements[rightPointer]);

		leftPointer += 1;
	}

	SwapPositions(elements[leftPointer], elements[pivotIndex]);

	return leftPointer;
}

void RunQuickSort(int leftIndex, int rightIndex)
{
	if (rightIndex - leftIndex <= 0)
	{
		return;
	}

	auto pivotIndex = Partition(leftIndex, rightIndex);

	RunQuickSort(leftIndex, pivotIndex - 1);

	RunQuickSort(pivotIndex + 1, rightIndex);
}

vector<int> QuickSort::Sort(vector<int>& numbers)
{
	elements = numbers;
	RunQuickSort(0, elements.size() - 1);

	return elements;
}
