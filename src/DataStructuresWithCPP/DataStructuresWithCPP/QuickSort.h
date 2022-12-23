#pragma once

#include <vector>

class QuickSort
{
public:
	std::vector<int> sort(std::vector<int>& numbers);

private:
	std::vector<int> elements;

	void swapPositions(int& firstElement, int& secondElement);

	int partition(int leftIndex, int rightIndex);

	void runQuickSort(int leftIndex, int rightIndex);
};

