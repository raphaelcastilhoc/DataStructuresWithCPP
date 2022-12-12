#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Heap
{
public:
	void insert(int value);

	int remove();

private:
	vector<shared_ptr<int>> data;

	shared_ptr<int> getRoot();

	shared_ptr<int> getLastNode();

	int getParentIndex(int index);

	int getLeftChildIndex(int index);

	int getRightChildIndex(int index);

	void swapPositions(int firstElementIndex, int secondElementIndex);

	bool hasGreaterChild(int index);

	int getGreaterChildIndex(int index);
};

