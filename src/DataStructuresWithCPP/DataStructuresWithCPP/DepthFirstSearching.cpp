#include "DepthFirstSearching.h"

void DepthFirstSearching::Vertex::addAdjacentVertex(std::shared_ptr<Vertex> vertex)
{
	adjacentVertices.push_back(vertex);
}

std::shared_ptr<DepthFirstSearching::Vertex> DepthFirstSearching::search(std::shared_ptr<Vertex> rootVertex, std::shared_ptr<std::string> searchName)
{
	auto searchedVertex = search(rootVertex, searchName, std::make_shared<std::map<std::string, bool>>());
	return searchedVertex;
}

std::shared_ptr<DepthFirstSearching::Vertex> DepthFirstSearching::search(std::shared_ptr<DepthFirstSearching::Vertex> vertex,
	std::shared_ptr<std::string> searchName,
	std::shared_ptr<std::map<std::string, bool>> visitedVertices)
{
	std::cout << "Checking vertex " << vertex->name << "\n";

	if (searchName->compare(vertex->name) == 0)
	{
		return vertex;
	}

	(*visitedVertices)[vertex->name] = true;

	for (auto adjacentVertex : vertex->adjacentVertices)
	{
		if ((*visitedVertices)[adjacentVertex->name])
		{
			continue;
		}

		std::cout << "Checking adjacent vertex " << adjacentVertex->name << " from vertex " << vertex->name << "\n";

		if (searchName->compare(adjacentVertex->name) == 0)
		{
			return adjacentVertex;
		}

		auto searchedVertex = search(adjacentVertex, searchName, visitedVertices);
		if (searchedVertex != nullptr)
		{
			return searchedVertex;
		}
	}

	return nullptr;
}