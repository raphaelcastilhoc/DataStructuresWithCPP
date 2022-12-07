#pragma once

#include <iostream>
#include <vector>

using namespace std;

class DoublyLinkedList
{
	struct Node
	{
		int value;
		shared_ptr<Node> previousNode;
		shared_ptr<Node> nextNode;
	};

private:
	shared_ptr<Node> firstNode;

	shared_ptr<Node> lastNode;

	void pushAtEnd(int value);

	void pushAtIndex(int value, shared_ptr<int> index);

	void removeAtEnd();

	void removeAtIndex(shared_ptr<int> index);

public:
	int* read(int index);

	vector<int> readAll();

	void push(int value, shared_ptr<int> index = nullptr);

	void remove(shared_ptr<int> index = nullptr);
};


