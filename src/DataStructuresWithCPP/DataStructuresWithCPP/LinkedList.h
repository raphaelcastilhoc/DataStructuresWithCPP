#pragma once

#include <iostream>
#include <vector>

using namespace std;

struct Node
{
	int value;
	shared_ptr<Node> nextNode;
};

class LinkedList
{

private:
	shared_ptr<Node> firstNode;

	void pushAtEnd(int value);

	void pushAtIndex(int value, shared_ptr<int> index);

public:
	int* read(int index);

	vector<int> readAll();

	void push(int value, shared_ptr<int> index = nullptr);

	void remove(int index);
};

