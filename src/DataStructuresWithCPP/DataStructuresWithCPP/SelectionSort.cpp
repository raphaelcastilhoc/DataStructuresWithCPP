#include "SelectionSort.h"

void SelectionSort::Sort(vector<int>& numbers)
{
	for (auto i = 0; i < numbers.size(); i++)
	{
		auto lowestNumberIndex = i;
		for (auto j = i + 1; j < numbers.size(); j++)
		{
			if(numbers[j] < numbers[lowestNumberIndex])
			{
				lowestNumberIndex = j;
			}
		}

		if (lowestNumberIndex != i)
		{
			auto tempNumber = numbers[i];
			numbers[i] = numbers[lowestNumberIndex];
			numbers[lowestNumberIndex] = tempNumber;
		}
	}
}
