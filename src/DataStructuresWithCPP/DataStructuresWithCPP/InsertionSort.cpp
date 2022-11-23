#include "InsertionSort.h"

void InsertionSort::Sort(vector<int>& numbers)
{
	for (auto i = 1; i < numbers.size(); i++)
	{
		auto tempNumber = numbers[i];
		auto position = i - 1;

		while (position >= 0)
		{
			if (numbers[position] > tempNumber) 
			{
				numbers[position + 1] = numbers[position];
				position -= 1;
			}
			else 
			{
				break;
			}
		}

		numbers[position + 1] = tempNumber;
	}
}
