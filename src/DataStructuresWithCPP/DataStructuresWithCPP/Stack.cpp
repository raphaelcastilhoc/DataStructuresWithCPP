#include "Stack.h"

vector<int> stack;

void Stack::Push(int element)
{
	stack.push_back(element);
	cout << element << " stacked \n";
}

void Stack::Pop()
{
	if (!stack.empty())
	{
		auto dequeuedElement = stack.back();
		stack.pop_back();
		cout << dequeuedElement << " unstacked \n";
	}
}

void Stack::PopAll()
{
	while (!stack.empty())
	{
		Pop();
	}
}

int Stack::Read()
{
	if (!stack.empty())
	{
		int lastElement = stack.back();
		cout << "The element on stack top is: " << lastElement << "\n";
		return lastElement;
	}
}

vector<int> Stack::ReadAll()
{
	cout << "The stack elements are: \n";
	for (int i = stack.size() - 1; i >= 0; i--)
	{
		cout << stack[i] << "\n";
	}

	return stack;
}