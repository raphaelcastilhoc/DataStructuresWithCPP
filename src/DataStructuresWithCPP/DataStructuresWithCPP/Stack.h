#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Stack
{
public:
	void Push(int number);

	void Pop();

	void PopAll();

	int Read();

	vector<int> ReadAll();
};

