#pragma once

#include <iostream>
#include <vector>

class BinarySearchTree
{
public:
	class Node
	{
	public:
		int value;
		std::shared_ptr<Node> leftChild;
		std::shared_ptr<Node> rightChild;
	};

	std::shared_ptr<Node> search(int searchValue);

	void insert(int value);

	void remove(int value);

	void readAll();

private:
	std::shared_ptr<Node> root;

	std::shared_ptr<Node> search(int searchValue, std::shared_ptr<Node> node);

	void insert(int value, std::shared_ptr<Node> node);

	std::shared_ptr<Node> remove(int value, std::shared_ptr<Node> node);

	std::shared_ptr<Node> lift(std::shared_ptr<Node> node, std::shared_ptr<Node> nodeTodelete);

	void readAll(std::shared_ptr<Node> node);
};

