#include "Heap.h"

void Heap::insert(int value)
{
    auto newNodeValue = make_shared<int>(value);
    data.push_back(newNodeValue);

    auto newNodeIndex = data.size() - 1;
    auto parentIndex = getParentIndex(newNodeIndex);

    while (*newNodeValue > *data[parentIndex])
    {
        swapPositions(newNodeIndex, parentIndex);

        newNodeIndex = parentIndex;
        parentIndex = getParentIndex(parentIndex);
    }
}

int Heap::remove()
{
    auto removedNode = *getRoot();

    data[0] = getLastNode();
    data.pop_back();

    auto parentIndex = 0;

    while (hasGreaterChild(parentIndex))
    {
        auto greaterChildIndex = getGreaterChildIndex(parentIndex);

        swapPositions(parentIndex, greaterChildIndex);

        parentIndex = greaterChildIndex;
    }

    return removedNode;
}

shared_ptr<int> Heap::getRoot()
{
    return data.front();
}

shared_ptr<int> Heap::getLastNode()
{
    return data.back();
}

int Heap::getParentIndex(int index)
{
    auto parentIndex = (index - 1) / 2;
    return parentIndex;
}

int Heap::getLeftChildIndex(int index)
{
    auto leftChildIndex = (index * 2) + 1;
    return leftChildIndex;
}

int Heap::getRightChildIndex(int index)
{
    auto rightChildIndex = (index * 2) + 2;
    return rightChildIndex;
}

void Heap::swapPositions(int firstElementIndex, int secondElementIndex)
{
    auto tempElement = data[firstElementIndex];
    data[firstElementIndex] = data[secondElementIndex];
    data[secondElementIndex] = tempElement;
}

bool Heap::hasGreaterChild(int index)
{
    auto leftChildIndex = getLeftChildIndex(index);
    auto rightChildIndex = getRightChildIndex(index);

    return (data.size() > leftChildIndex && *data[getLeftChildIndex(index)] > *data[index]) ||
        (data.size() > rightChildIndex && *data[getRightChildIndex(index)] > *data[index]);
}

int Heap::getGreaterChildIndex(int index)
{
    auto leftChildIndex = getLeftChildIndex(index);
    auto rightChildIndex = getRightChildIndex(index);

    if (*data[leftChildIndex] > *data[rightChildIndex])
    {
        return leftChildIndex;
    }
    else
    {
        return rightChildIndex;
    }
}