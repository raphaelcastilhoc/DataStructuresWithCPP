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

	std::cout << "The element on doubly linked list index " << index << " is: " << currentNode->value << "\n";

	return &currentNode->value;
}

std::vector<int> DoublyLinkedList::readAll()
{
	std::vector<int> nodeValues;

	auto currentNode = firstNode;
	nodeValues.push_back(firstNode->value);

	std::cout << "The doubly linked list elements are: \n";
	while (currentNode)
	{
		nodeValues.push_back(currentNode->value);
		std::cout << currentNode->value << "\n";

		currentNode = currentNode->nextNode;
	}

	return nodeValues;
}

void DoublyLinkedList::push(int value, std::shared_ptr<int> index)
{
	if (firstNode == nullptr)
	{
		std::shared_ptr<Node>newNode(new Node{ value, nullptr, nullptr });
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
	std::shared_ptr<Node> newNode(new Node{ value, lastNode, nullptr });
	lastNode->nextNode = newNode;
	lastNode = newNode;
}

void DoublyLinkedList::pushAtIndex(int value, std::shared_ptr<int> index)
{
	if (*index == 0)
	{
		std::shared_ptr<Node>newNode(new Node{ value, nullptr, firstNode });
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

	std::shared_ptr<Node> newNode(new Node{ value, currentNode, currentNode->nextNode });
	currentNode->nextNode->previousNode = newNode;
	currentNode->nextNode = newNode;
}

void DoublyLinkedList::remove(std::shared_ptr<int> index)
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

void DoublyLinkedList::removeAtIndex(std::shared_ptr<int> index)
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