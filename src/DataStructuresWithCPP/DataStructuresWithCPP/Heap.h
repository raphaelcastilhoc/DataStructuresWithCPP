#pragma once

#include <iostream>
#include <vector>

class Heap
{
public:
	void insert(int value);

	int remove();

private:
	std::vector<std::shared_ptr<int>> data;

	std::shared_ptr<int> getRoot();

	std::shared_ptr<int> getLastNode();

	int getParentIndex(int index);

	int getLeftChildIndex(int index);

	int getRightChildIndex(int index);

	void swapPositions(int firstElementIndex, int secondElementIndex);

	bool hasGreaterChild(int index);

	int getGreaterChildIndex(int index);
};

