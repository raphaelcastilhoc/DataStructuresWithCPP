#pragma once

#include <vector>

using namespace std;

class QuickSelect
{
private:
	vector<int> Elements;

	void SwapPositions(int& firstElement, int& secondElement);

	int Partition(int leftIndex, int rightIndex);

	int RunSelectLowest(int position, int leftIndex, int rightIndex);

public:
	int SelectLowest(vector<int>& numbers, int position);
};