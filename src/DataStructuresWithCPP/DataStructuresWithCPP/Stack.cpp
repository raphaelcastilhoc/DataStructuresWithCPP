#include "Stack.h"
#include<ranges>

vector<int> stack;

void Stack::Add(int number)
{
	stack.push_back(number);
}

void Stack::Remove()
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