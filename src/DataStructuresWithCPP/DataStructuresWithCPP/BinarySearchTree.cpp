#include "BinarySearchTree.h"

#include <string>

std::shared_ptr<BinarySearchTree::Node> BinarySearchTree::search(int searchValue, std::shared_ptr<BinarySearchTree::Node> node)
{
	if (!node || node->value == searchValue)
	{
		return node;
	}

	if (searchValue > node->value)
	{
		return search(searchValue, node->rightChild);
	}
	else
	{
		return search(searchValue, node->leftChild);
	}
}

std::shared_ptr<BinarySearchTree::Node> BinarySearchTree::search(int searchValue)
{
	auto node = search(searchValue, root);

	std::cout << (node ? "The searched node is: " + std::to_string(node->value) : "Node not found") << "\n";
	std::cout << (node && node->leftChild ? "Its left child is: " + std::to_string(node->leftChild->value) : "No left child") << "\n";
	std::cout << (node && node->rightChild ? "Its right child is: " + std::to_string(node->rightChild->value) : "No right child") << "\n";

	return node;
}

void BinarySearchTree::insert(int value, std::shared_ptr<Node> node)
{
	if (value > node->value)
	{
		if (!node->rightChild)
		{
			node->rightChild = std::make_shared<Node>(Node{ value });
		}
		else
		{
			insert(value, node->rightChild);
		}
	}
	else
	{
		if (!node->leftChild)
		{
			node->leftChild = std::make_shared<Node>(Node{ value });
		}
		else
		{
			insert(value, node->leftChild);
		}
	}
}

void BinarySearchTree::insert(int value)
{
	if (!root)
	{
		root = std::make_shared<Node>(Node{ value });
		return;
	}

	insert(value, root);
}

std::shared_ptr<BinarySearchTree::Node> BinarySearchTree::remove(int value, std::shared_ptr<Node> node)
{
	if (!node)
	{
		return nullptr;
	}

	if (value > node->value)
	{
		node->rightChild = remove(value, node->rightChild);
		return node;
	}
	else if (value < node->value)
	{
		node->leftChild = remove(value, node->leftChild);
		return node;
	}
	else if (value == node->value)
	{
		if (!node->leftChild)
		{
			return node->rightChild;
		}
		else if (!node->rightChild)
		{
			return node->leftChild;
		}

		node->rightChild = lift(node->rightChild, node);
		return node;
	}
}

std::shared_ptr<BinarySearchTree::Node> BinarySearchTree::lift(std::shared_ptr<Node> node, std::shared_ptr<Node> nodeToDelete)
{
	if (node->leftChild)
	{
		node->leftChild = lift(node->leftChild, nodeToDelete);
		return node;
	}

	nodeToDelete->value = node->value;
	return node->rightChild;
}

void BinarySearchTree::remove(int value)
{
	remove(value, root);
}

void BinarySearchTree::readAll()
{
	readAll(root);
}

void BinarySearchTree::readAll(std::shared_ptr<Node> node)
{
	if (!node)
	{
		return;
	}

	std::cout << std::to_string(node->value) << "\n";

	readAll(node->leftChild);
	readAll(node->rightChild);
}