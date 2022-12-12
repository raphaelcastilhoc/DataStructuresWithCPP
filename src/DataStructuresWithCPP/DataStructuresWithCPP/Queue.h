#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Queue
{
private:
	vector<int> queue;

public:
	void enqueue(int number);

	void dequeue();

	void dequeueAll();

	int read();

	vector<int> readAll();
};

