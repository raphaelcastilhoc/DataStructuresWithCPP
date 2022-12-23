#include "QuickSelect.h"

void QuickSelect::swapPositions(int& firstElement, int& secondElement)
{
	auto tempNumber = firstElement;
	firstElement = secondElement;
	secondElement = tempNumber;
}

int QuickSelect::partition(int leftIndex, int rightIndex)
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

int QuickSelect::runSelectLowest(int position, int leftIndex, int rightIndex)
{
	if (rightIndex - leftIndex <= 0)
	{
		return elements[leftIndex];
	}

	auto pivotIndex = partition(leftIndex, rightIndex);

	if (position < pivotIndex)
	{
		runSelectLowest(position, leftIndex, pivotIndex - 1);
	}
	else if(position > pivotIndex)
	{
		runSelectLowest(position, pivotIndex + 1, rightIndex);
	}

	return elements[position];
}

int QuickSelect::selectLowest(std::vector<int>& numbers, int position)
{
	elements = numbers;
	auto result = runSelectLowest(position, 0, numbers.size() - 1);

	return result;
}