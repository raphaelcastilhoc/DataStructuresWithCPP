#include "Fibonacci.h"

long Fibonacci::run(long number)
{
	if (number <= 1)
	{
		return number;
	}

	return run(number - 1) + run(number - 2);
}
