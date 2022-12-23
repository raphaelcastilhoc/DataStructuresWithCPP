#pragma once

#include <iostream>
#include <vector>

class LinkedList
{
	struct Node
	{
		int value;
		std::shared_ptr<Node> nextNode;
	};

private:
	std::shared_ptr<Node> firstNode;

	void pushAtEnd(int value);

	void pushAtIndex(int value, std::shared_ptr<int> index);

public:
	int* read(int index);

	std::vector<int> readAll();

	void push(int value, std::shared_ptr<int> index = nullptr);

	void remove(int index);
};