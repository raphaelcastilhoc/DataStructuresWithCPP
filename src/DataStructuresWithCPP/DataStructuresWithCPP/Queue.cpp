#include <iostream>

#include "Queue.h"

void Queue::enqueue(int element)
{
	queue.push_back(element);
	std::cout << element << " enqueued \n";
}

void Queue::dequeue()
{
	if (!queue.empty())
	{
		auto dequeuedElement = queue.front();
		queue.erase(queue.begin());
		std::cout << dequeuedElement << " dequeued \n";
	}
}

void Queue::dequeueAll()
{
	while (!queue.empty())
	{
		dequeue();
	}
}

int Queue::read()
{
	if (!queue.empty())
	{
		int firstElement = queue.front();
		std::cout << "The element on queue front is: " << firstElement << "\n";
		return firstElement;
	}
}

std::vector<int> Queue::readAll()
{
	std::cout << "The queue elements are: \n";
	for (auto number : queue)
	{
		std::cout << number << "\n";
	}

	return queue;
}
