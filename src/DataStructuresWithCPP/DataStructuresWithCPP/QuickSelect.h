#pragma once

#include <vector>

class QuickSelect
{
public:
	int selectLowest(std::vector<int>& numbers, int position);

private:
	std::vector<int> elements;

	void swapPositions(int& firstElement, int& secondElement);

	int partition(int leftIndex, int rightIndex);

	int runSelectLowest(int position, int leftIndex, int rightIndex);
};