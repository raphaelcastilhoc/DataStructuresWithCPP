#pragma once

#include <vector>

using namespace std;

class QuickSort
{
public:
	vector<int> sort(vector<int>& numbers);

private:
	void swapPositions(int& firstElement, int& secondElement);

	int partition(int leftIndex, int rightIndex);

	void runQuickSort(int leftIndex, int rightIndex);
};

