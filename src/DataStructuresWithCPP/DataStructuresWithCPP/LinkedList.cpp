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

	std::cout << "The element on linked list index " << index << " is: " << currentNode->value << "\n";

	return &currentNode->value;
}

std::vector<int> LinkedList::readAll()
{
	std::vector<int> nodeValues;

	auto currentNode = firstNode;
	nodeValues.push_back(firstNode->value);

	std::cout << "The linked list elements are: \n";
	while (currentNode)
	{
		nodeValues.push_back(currentNode->value);
		std::cout << currentNode->value << "\n";

		currentNode = currentNode->nextNode;
	}

	return nodeValues;
}

void LinkedList::push(int value, std::shared_ptr<int> index)
{
	if (firstNode == nullptr)
	{
		std::shared_ptr<Node>newNode(new Node{ value, nullptr });
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

	std::shared_ptr<Node> newNode(new Node{ value, nullptr });
	currentNode->nextNode = newNode;
}

void LinkedList::pushAtIndex(int value, std::shared_ptr<int> index)
{
	if (*index == 0)
	{
		std::shared_ptr<Node>newNode(new Node{ value, firstNode });
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

	std::shared_ptr<Node> newNode(new Node{ value, currentNode->nextNode });
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
