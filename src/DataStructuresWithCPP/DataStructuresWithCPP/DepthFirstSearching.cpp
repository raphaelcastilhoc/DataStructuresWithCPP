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
	std::shared_ptr<std::string> name,
	std::shared_ptr<std::map<std::string, bool>> visitedVertices)
{
	if (name->compare(vertex->name) == 0)
	{
		return vertex;
	}

	(*visitedVertices)[vertex->name] = true;

	for (auto adjacentVertex : vertex->adjacentVertices)
	{
		if (name->compare(adjacentVertex->name) == 0)
		{
			return adjacentVertex;
		}

		auto searchedVertex = search(adjacentVertex, name, visitedVertices);
		if (searchedVertex != nullptr)
		{
			return searchedVertex;
		}
	}

	return nullptr;
}