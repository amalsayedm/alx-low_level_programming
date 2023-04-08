#include "main.h"

/**
 * _isdigit - Checks for a digit (0-9).
 *@c: input
 *
 *Return: 0  or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
