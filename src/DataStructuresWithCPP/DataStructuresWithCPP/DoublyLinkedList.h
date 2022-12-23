#pragma once

#include <iostream>
#include <vector>

class DoublyLinkedList
{
	struct Node
	{
		int value;
		std::shared_ptr<Node> previousNode;
		std::shared_ptr<Node> nextNode;
	};

private:
	std::shared_ptr<Node> firstNode;

	std::shared_ptr<Node> lastNode;

	void pushAtEnd(int value);

	void pushAtIndex(int value, std::shared_ptr<int> index);

	void removeAtEnd();

	void removeAtIndex(std::shared_ptr<int> index);

public:
	int* read(int index);

	std::vector<int> readAll();

	void push(int value, std::shared_ptr<int> index = nullptr);

	void remove(std::shared_ptr<int> index = nullptr);
};


