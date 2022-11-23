#include "Queue.h"

vector<int> queue;

void Queue::Enqueue(int element)
{
	queue.push_back(element);
	cout << element << " enqueued \n";
}

void Queue::Dequeue()
{
	if (!queue.empty())
	{
		auto dequeuedElement = queue.front();
		queue.erase(queue.begin());
		cout << dequeuedElement << " dequeued \n";
	}
}

void Queue::DequeueAll()
{
	while (!queue.empty())
	{
		Dequeue();
	}
}

int Queue::Read()
{
	if (!queue.empty())
	{
		int firstElement = queue.front();
		cout << "The element on queue front is: " << firstElement << "\n";
		return firstElement;
	}
}

vector<int> Queue::ReadAll()
{
	cout << "The queue elements are: \n";
	for (auto number : queue)
	{
		cout << number << "\n";
	}

	return queue;
}
