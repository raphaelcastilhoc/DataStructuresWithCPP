#include "DoublyLinkedList.h"

int* DoublyLinkedList::read(int index)
{
	auto currentNode = firstNode;
	auto currentIndex = 0;

	while (currentIndex < index)
	{
		currentNode = currentNode->nextNode;
		currentIndex += 1;
	}

	cout << "The element on doubly linked list index " << index << " is: " << currentNode->value << "\n";

	return &currentNode->value;
}

vector<int> DoublyLinkedList::readAll()
{
	vector<int> nodeValues;

	auto currentNode = firstNode;
	nodeValues.push_back(firstNode->value);

	cout << "The doubly linked list elements are: \n";
	while (currentNode)
	{
		nodeValues.push_back(currentNode->value);
		cout << currentNode->value << "\n";

		currentNode = currentNode->nextNode;
	}

	return nodeValues;
}

void DoublyLinkedList::push(int value, shared_ptr<int> index)
{
	if (firstNode == nullptr)
	{
		shared_ptr<Node>newNode(new Node{ value, nullptr, nullptr });
		firstNode = newNode;
		lastNode = newNode;
		return;
	}

	if (index == nullptr)
	{
		pushAtEnd(value);
		return;
	}

	pushAtIndex(value, index);
}

void DoublyLinkedList::pushAtEnd(int value)
{
	shared_ptr<Node> newNode(new Node{ value, lastNode, nullptr });
	lastNode->nextNode = newNode;
	lastNode = newNode;
}

void DoublyLinkedList::pushAtIndex(int value, shared_ptr<int> index)
{
	if (*index == 0)
	{
		shared_ptr<Node>newNode(new Node{ value, nullptr, firstNode });
		firstNode->previousNode = newNode;
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

	shared_ptr<Node> newNode(new Node{ value, currentNode, currentNode->nextNode });
	currentNode->nextNode->previousNode = newNode;
	currentNode->nextNode = newNode;
}

void DoublyLinkedList::remove(shared_ptr<int> index)
{
	if (index == nullptr)
	{
		removeAtEnd();
	}
	else
	{
		removeAtIndex(index);
	}
}

void DoublyLinkedList::removeAtEnd()
{
	auto newLastNode = lastNode->previousNode;
	lastNode->previousNode = nullptr;
	lastNode = newLastNode;
	lastNode->nextNode = nullptr;
}

void DoublyLinkedList::removeAtIndex(shared_ptr<int> index)
{
	if (*index == 0)
	{
		firstNode = firstNode->nextNode;
		if (firstNode != nullptr)
		{
			firstNode->previousNode = nullptr;
		}

		return;
	}

	auto currentNode = firstNode;
	auto currentIndex = 0;

	while (currentIndex < *index - 1)
	{
		currentNode = currentNode->nextNode;
		currentIndex += 1;
	}

	auto nodeAfterDeletedNode = currentNode->nextNode->nextNode;
	nodeAfterDeletedNode->previousNode = currentNode;
	currentNode->nextNode = nodeAfterDeletedNode;
}