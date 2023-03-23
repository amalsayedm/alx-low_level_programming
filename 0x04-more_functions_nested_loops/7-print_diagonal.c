#include "main.h"

/**
 *print_diagonal - Draws a diagonal line
 *@n: The number of \ characters to be printed.
 */


void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
