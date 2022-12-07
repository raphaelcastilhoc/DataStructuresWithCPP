#pragma once

#include <vector>

using namespace std;

class QuickSelect
{
private:
	vector<int> elements;

	void swapPositions(int& firstElement, int& secondElement);

	int partition(int leftIndex, int rightIndex);

	int runSelectLowest(int position, int leftIndex, int rightIndex);

public:
	int selectLowest(vector<int>& numbers, int position);
};