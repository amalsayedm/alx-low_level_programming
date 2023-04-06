#include "main.h"

/**
 * _pow_recursion - x raised to the power of y.
 * @x: The number
 * @y: The power.
 * Return: The value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
	return (-1);

	if (y > 0)
	{
	res *=  _pow_recursion(x, y - 1);
}
	else if (y == 0)
{
	return (1);
	}

	return (res);
}
