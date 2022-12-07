#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Queue
{
public:
	void enqueue(int number);

	void dequeue();

	void dequeueAll();

	int read();

	vector<int> readAll();
};

