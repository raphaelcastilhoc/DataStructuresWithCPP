#pragma once

#include <iostream>
#include <vector>

using namespace std;

class BinarySearchTree
{
public:
	class Node
	{
	public:
		int value;
		shared_ptr<Node> leftChild;
		shared_ptr<Node> rightChild;
	};

	shared_ptr<Node> search(int searchValue);

	void insert(int value);

	void remove(int value);

private:
	shared_ptr<Node> root;

	shared_ptr<Node> searchNode(int searchValue, shared_ptr<Node> node);

	void insertNode(int value, shared_ptr<Node> node);

	shared_ptr<Node> removeNode(int value, shared_ptr<Node> node);

	shared_ptr<Node> liftNode(shared_ptr<Node> node, shared_ptr<Node> nodeTodelete);
};

