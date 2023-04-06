#include "main.h"

/**
 * factorial - Returns the factorial
 * @n: the input
 * Return: the output factorial
*/

int factorial(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	if (n > 0)
	{
	i = n;
	i *= factorial(n - 1);
	}

	return (i);
}
