#include "LinkedList.h"

int* LinkedList::read(int index)
{
	auto currentNode = firstNode;
	auto currentIndex = 0;

	while (currentIndex < index)
	{
		currentNode = currentNode->nextNode;
		currentIndex += 1;
	}

	cout << "The element on linked list index " << index << " is: " << currentNode->value << "\n";

	return &currentNode->value;
}

vector<int> LinkedList::readAll()
{
	vector<int> nodeValues;

	auto currentNode = firstNode;
	nodeValues.push_back(firstNode->value);

	cout << "The linked list elements are: \n";
	while (currentNode)
	{
		nodeValues.push_back(currentNode->value);
		cout << currentNode->value << "\n";

		currentNode = currentNode->nextNode;
	}

	return nodeValues;
}

void LinkedList::push(int value, shared_ptr<int> index)
{
	if (firstNode == nullptr)
	{
		shared_ptr<Node>newNode(new Node{ value, nullptr });
		firstNode = newNode;
		return;
	}

	if (index == nullptr)
	{
		pushAtEnd(value);
		return;
	}

	pushAtIndex(value, index);
}

void LinkedList::pushAtEnd(int value)
{
	auto currentNode = firstNode;
	while (currentNode->nextNode)
	{
		currentNode = currentNode->nextNode;
	}

	shared_ptr<Node> newNode(new Node{ value, nullptr });
	currentNode->nextNode = newNode;
}

void LinkedList::pushAtIndex(int value, shared_ptr<int> index)
{
	if (*index == 0)
	{
		shared_ptr<Node>newNode(new Node{ value, firstNode });
		firstNode = newNode;
		return;
	}

	auto currentNode = firstNode;
	auto currentIndex = 0;
	while (currentIndex < *index - 1)
	{
		if (currentNode == nullptr)
		{
			break;
		}

		currentNode = currentNode->nextNode;
		currentIndex += 1;
	}

	if (currentNode == nullptr || currentNode->nextNode == nullptr)
	{
		pushAtEnd(value);
		return;
	}

	shared_ptr<Node> newNode(new Node{ value, currentNode->nextNode });
	currentNode->nextNode = newNode;
}

void LinkedList::remove(int index)
{
	if (index == 0)
	{
		firstNode = firstNode->nextNode;
		return;
	}

	auto currentNode = firstNode;
	auto currentIndex = 0;

	while (currentIndex < index - 1)
	{
		currentNode = currentNode->nextNode;
		currentIndex += 1;
	}

	auto nodeAfterDeletedNode = currentNode->nextNode->nextNode;
	currentNode->nextNode = nodeAfterDeletedNode;
}
