#include "BreadthFirstSearching.h"
#include <queue>
#include <map>

void BreadthFirstSearching::Vertex::addAdjacentVertex(std::shared_ptr<Vertex> vertex)
{
	adjacentVertices.push_back(vertex);
}

std::shared_ptr<BreadthFirstSearching::Vertex> BreadthFirstSearching::search(std::shared_ptr<Vertex> rootVertex, std::shared_ptr<std::string> searchName)
{
	std::queue<std::shared_ptr<BreadthFirstSearching::Vertex>> queue;
	std::map<std::string, bool> visitedVertices;

	queue.push(rootVertex);

	while (!queue.empty())
	{
		auto currentVertex = queue.front();
		queue.pop();

		if (visitedVertices[currentVertex->name])
		{
			continue;
		}

		std::cout << "Checking vertex " << currentVertex->name << "\n";

		visitedVertices[currentVertex->name] = true;

		if (searchName->compare(currentVertex->name) == 0)
		{
			return currentVertex;
		}

		for (auto adjacentVertex : currentVertex->adjacentVertices)
		{
			if (visitedVertices[adjacentVertex->name])
			{
				continue;
			}

			std::cout << "Adding adjacent vertex " << adjacentVertex->name << " from vertex " << currentVertex->name << "\n";
			queue.push(adjacentVertex);
		}
	}

	return nullptr;
}
