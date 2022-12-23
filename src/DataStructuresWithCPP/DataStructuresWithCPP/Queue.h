#pragma once

#include <vector>

class Queue
{
private:
	std::vector<int> queue;

public:
	void enqueue(int number);

	void dequeue();

	void dequeueAll();

	int read();

	std::vector<int> readAll();
};

