#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Stack
{
private:
	vector<int> stack;

public:
	void push(int number);

	void pop();

	void popAll();

	int read();

	vector<int> readAll();
};

