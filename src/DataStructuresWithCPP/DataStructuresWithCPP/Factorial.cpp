#include "Factorial.h"

long Factorial::Run(int number) 
{
	if (number <= 1)
	{
		return number;
	}

	return number * Run(number - 1);
}
