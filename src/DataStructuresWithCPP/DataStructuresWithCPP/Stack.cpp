#include "Stack.h"

vector<int> stack;

void Stack::Push(int number)
{
	stack.push_back(number);
}

void Stack::Pop()
{
	stack.pop_back();
}

void Stack::Show()
{
	cout << "The element on stack top is: " << stack.back() << "\n";
}

void Stack::ShowAll()
{
	cout << "The stack elements are: \n";
	for (int i = stack.size() - 1; i >= 0; i--)
	{
		cout << stack[i] << "\n";
	}
}