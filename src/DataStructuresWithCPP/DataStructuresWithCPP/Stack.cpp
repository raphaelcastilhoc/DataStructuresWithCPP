#include <iostream>

#include "Stack.h"

void Stack::push(int element)
{
	stack.push_back(element);
	std::cout << element << " stacked \n";
}

void Stack::pop()
{
	if (!stack.empty())
	{
		auto dequeuedElement = stack.back();
		stack.pop_back();
		std::cout << dequeuedElement << " unstacked \n";
	}
}

void Stack::popAll()
{
	while (!stack.empty())
	{
		pop();
	}
}

int Stack::read()
{
	if (!stack.empty())
	{
		int lastElement = stack.back();
		std::cout << "The element on stack top is: " << lastElement << "\n";
		return lastElement;
	}
}

std::vector<int> Stack::readAll()
{
	std::cout << "The stack elements are: \n";
	for (int i = stack.size() - 1; i >= 0; i--)
	{
		std::cout << stack[i] << "\n";
	}

	return stack;
}