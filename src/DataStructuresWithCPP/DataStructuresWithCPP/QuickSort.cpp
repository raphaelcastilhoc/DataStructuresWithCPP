#include "QuickSort.h"

vector<int> elements;

void SwapPositions(int& firstElement, int& secondElement)
{
	auto tempNumber = firstElement;
	firstElement = secondElement;
	secondElement = tempNumber;
}

int Partition(int leftIndex, int rightIndex)
{
	auto pivotIndex = rightIndex;
	auto pivotValue = elements[pivotIndex];

	rightIndex -= 1;

	while (true)
	{
		while (elements[leftIndex] < pivotValue)
		{
			leftIndex += 1;
		}

		while (elements[rightIndex] > pivotValue)
		{
			rightIndex -= 1;
		}

		if (leftIndex >= rightIndex)
		{
			break;
		}

		SwapPositions(elements[leftIndex], elements[rightIndex]);

		leftIndex += 1;
	}

	SwapPositions(elements[leftIndex], elements[pivotIndex]);

	return leftIndex;
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
