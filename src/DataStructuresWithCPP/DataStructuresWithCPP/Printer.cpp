#include "Printer.h"

void Printer::Print(vector<int> numbers)
{
	for (int number : numbers)
	{
		cout << number << " ";
	}
}
