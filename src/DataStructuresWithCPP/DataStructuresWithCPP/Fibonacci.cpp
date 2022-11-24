#include "Fibonacci.h"

long Fibonacci::Run(long number)
{
	if (number <= 1)
	{
		return number;
	}

	return Run(number - 1) + Run(number - 2);
}
