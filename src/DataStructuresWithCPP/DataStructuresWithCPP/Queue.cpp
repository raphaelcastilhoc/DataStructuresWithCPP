#include "Queue.h"

vector<int> queue;

void Queue::Enqueue(int number)
{
	queue.push_back(number);
}

void Queue::Unqueue()
{
	queue.erase(queue.begin());
}

void Queue::Show()
{
	cout << "The element on queue front is: " << queue.front() << "\n";
}

void Queue::ShowAll()
{
	cout << "The queue elements are: \n";
	for (auto number : queue)
	{
		cout << number << "\n";
	}
}
