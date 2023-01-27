#pragma once

#include <iostream>
#include <vector>

class BreadthFirstSearching
{
public:
	struct Vertex
	{
		std::string name;
		std::vector<std::shared_ptr<Vertex>> adjacentVertices;

		void addAdjacentVertex(std::shared_ptr<Vertex> vertex);
	};

	std::shared_ptr<BreadthFirstSearching::Vertex> search(std::shared_ptr<Vertex> rootVertex, std::shared_ptr<std::string> searchName);
};