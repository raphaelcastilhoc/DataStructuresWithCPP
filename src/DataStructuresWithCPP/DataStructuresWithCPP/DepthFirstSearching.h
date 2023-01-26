#pragma once

#include <iostream>
#include <vector>
#include <map>

class DepthFirstSearching
{
public:
	struct Vertex
	{
		std::string name;
		std::vector<std::shared_ptr<Vertex>> adjacentVertices;

		void addAdjacentVertex(std::shared_ptr<Vertex> vertex);
	};

	std::shared_ptr<DepthFirstSearching::Vertex> search(std::shared_ptr<Vertex> rootVertex, std::shared_ptr<std::string> searchName);

private:
	std::shared_ptr<Vertex> search(std::shared_ptr<Vertex> vertex, std::shared_ptr<std::string> name, std::shared_ptr<std::map<std::string, bool>> visitedVertices);
};

