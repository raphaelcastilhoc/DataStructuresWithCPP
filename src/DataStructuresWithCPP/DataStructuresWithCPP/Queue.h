#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Queue
{
public:
	void Enqueue(int number);

	void Dequeue();

	void DequeueAll();

	int Read();

	vector<int> ReadAll();
};

