#include "BubbleSort.h"

void BubbleSort::Sort(vector<int>& numbers)
{
	auto index = numbers.size() - 1;
	auto isSorted = false;
	while (!isSorted)
	{
		isSorted = true;
		for (int i = 0; i < index; i++)
		{
			if (numbers[i] > numbers[i + 1])
			{
				auto tempNumber = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = tempNumber;

				isSorted = false;
			}
		}

		index -= 1;
	}
}
