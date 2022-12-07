#include "Queue.h"

vector<int> queue;

void Queue::enqueue(int element)
{
	queue.push_back(element);
	cout << element << " enqueued \n";
}

void Queue::dequeue()
{
	if (!queue.empty())
	{
		auto dequeuedElement = queue.front();
		queue.erase(queue.begin());
		cout << dequeuedElement << " dequeued \n";
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
		cout << "The element on queue front is: " << firstElement << "\n";
		return firstElement;
	}
}

vector<int> Queue::readAll()
{
	cout << "The queue elements are: \n";
	for (auto number : queue)
	{
		cout << number << "\n";
	}

	return queue;
}
