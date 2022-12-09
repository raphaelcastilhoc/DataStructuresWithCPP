#pragma once

#include <iostream>
#include <vector>
#include <string>

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

	void readAll();

private:
	shared_ptr<Node> root;

	shared_ptr<Node> search(int searchValue, shared_ptr<Node> node);

	void insert(int value, shared_ptr<Node> node);

	shared_ptr<Node> remove(int value, shared_ptr<Node> node);

	shared_ptr<Node> lift(shared_ptr<Node> node, shared_ptr<Node> nodeTodelete);

	void readAll(shared_ptr<Node> node);
};

