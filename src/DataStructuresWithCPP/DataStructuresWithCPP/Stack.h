#pragma once

#include <vector>

class Stack
{
private:
	std::vector<int> stack;

public:
	void push(int number);

	void pop();

	void popAll();

	int read();

	std::vector<int> readAll();
};

