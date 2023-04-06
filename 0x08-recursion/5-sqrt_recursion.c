#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square
 * @n: The number
 * Return: the output
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	if ((root * root) == n)
		return (root);

	if (root == n / 2)
		return (-1);

	return (find_sqrt(n, root + 1));
}
