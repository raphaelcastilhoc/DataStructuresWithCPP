#include "QuickSelect.h"

void QuickSelect::SwapPositions(int& firstElement, int& secondElement)
{
	auto tempNumber = firstElement;
	firstElement = secondElement;
	secondElement = tempNumber;
}

int QuickSelect::Partition(int leftIndex, int rightIndex)
{
	auto pivotIndex = rightIndex;
	auto pivotValue = Elements[pivotIndex];

	rightIndex -= 1;

	while (true)
	{
		while (Elements[leftIndex] < pivotValue)
		{
			leftIndex += 1;
		}

		while (Elements[rightIndex] > pivotValue)
		{
			rightIndex -= 1;
		}

		if (leftIndex >= rightIndex)
		{
			break;
		}

		SwapPositions(Elements[leftIndex], Elements[rightIndex]);

		leftIndex += 1;
	}

	SwapPositions(Elements[leftIndex], Elements[pivotIndex]);

	return leftIndex;
}

int QuickSelect::RunSelectLowest(int position, int leftIndex, int rightIndex)
{
	if (rightIndex - leftIndex <= 0)
	{
		return Elements[leftIndex];
	}

	auto pivotIndex = Partition(leftIndex, rightIndex);

	if (position < pivotIndex)
	{
		RunSelectLowest(position, leftIndex, pivotIndex - 1);
	}
	else if(position > pivotIndex)
	{
		RunSelectLowest(position, pivotIndex + 1, rightIndex);
	}

	return Elements[position];
}

int QuickSelect::SelectLowest(vector<int>& numbers, int position)
{
	Elements = numbers;
	auto result = RunSelectLowest(position, 0, numbers.size() - 1);

	return result;
}