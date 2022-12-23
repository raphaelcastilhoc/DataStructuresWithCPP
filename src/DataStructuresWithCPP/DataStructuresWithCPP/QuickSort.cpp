#include "QuickSort.h"

void QuickSort::swapPositions(int& firstElement, int& secondElement)
{
	auto tempNumber = firstElement;
	firstElement = secondElement;
	secondElement = tempNumber;
}

int QuickSort::partition(int leftIndex, int rightIndex)
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

		swapPositions(elements[leftIndex], elements[rightIndex]);

		leftIndex += 1;
	}

	swapPositions(elements[leftIndex], elements[pivotIndex]);

	return leftIndex;
}

void QuickSort::runQuickSort(int leftIndex, int rightIndex)
{
	if (rightIndex - leftIndex <= 0)
	{
		return;
	}

	auto pivotIndex = partition(leftIndex, rightIndex);

	runQuickSort(leftIndex, pivotIndex - 1);

	runQuickSort(pivotIndex + 1, rightIndex);
}

std::vector<int> QuickSort::sort(std::vector<int>& numbers)
{
	elements = numbers;
	runQuickSort(0, elements.size() - 1);

	return elements;
}
