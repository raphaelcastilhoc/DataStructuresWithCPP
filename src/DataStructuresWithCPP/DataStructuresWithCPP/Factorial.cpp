#include "Factorial.h"

long Factorial::run(int number) 
{
	if (number <= 1)
	{
		return number;
	}

	return number * run(number - 1);
}
