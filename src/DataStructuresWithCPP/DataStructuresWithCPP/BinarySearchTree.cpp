#include "BinarySearchTree.h"

shared_ptr<BinarySearchTree::Node> BinarySearchTree::searchNode(int searchValue, shared_ptr<BinarySearchTree::Node> node)
{
	if (!node || node->value == searchValue)
	{
		return node;
	}

	if (searchValue > node->value)
	{
		return searchNode(searchValue, node->rightChild);
	}
	else
	{
		return searchNode(searchValue, node->leftChild);
	}
}

shared_ptr<BinarySearchTree::Node> BinarySearchTree::search(int searchValue)
{
	auto node = searchNode(searchValue, root);
	return node;
}

void BinarySearchTree::insertNode(int value, shared_ptr<Node> node)
{
	if (value > node->value)
	{
		if (!node->rightChild)
		{
			node->rightChild = make_shared<Node>(Node{ value });
		}
		else
		{
			insertNode(value, node->rightChild);
		}
	}
	else
	{
		if (!node->leftChild)
		{
			node->leftChild = make_shared<Node>(Node{ value });
		}
		else
		{
			insertNode(value, node->leftChild);
		}
	}
}

void BinarySearchTree::insert(int value)
{
	if (!root)
	{
		root = make_shared<Node>(Node{ value });
		return;
	}

	insertNode(value, root);
}

shared_ptr<BinarySearchTree::Node> BinarySearchTree::removeNode(int value, shared_ptr<Node> node)
{
	if (!node)
	{
		return nullptr;
	}

	if (value > node->value)
	{
		node->rightChild = removeNode(value, node->rightChild);
		return node;
	}
	else if (value < node->value)
	{
		node->leftChild = removeNode(value, node->leftChild);
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

		node->rightChild = liftNode(node->rightChild, node);
		return node;
	}
}

shared_ptr<BinarySearchTree::Node> BinarySearchTree::liftNode(shared_ptr<Node> node, shared_ptr<Node> nodeToDelete)
{
	if (node->leftChild)
	{
		node->leftChild = liftNode(node->leftChild, nodeToDelete);
		return node;
	}

	nodeToDelete->value = node->value;
	return node->rightChild;
}

void BinarySearchTree::remove(int value)
{
	removeNode(value, root);
}