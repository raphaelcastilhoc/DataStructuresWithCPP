#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Stack
{
public:
	void push(int number);

	void pop();

	void popAll();

	int read();

	vector<int> readAll();
};

