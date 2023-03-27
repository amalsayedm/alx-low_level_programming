#include "main.h"

/**
 *_puts - Prints a string to stdout.
 *
 *@str: input
 */

void _puts(char *str)
{
	while (*str++)
	{

		_putchar(*str);
	}
	_putchar('\n');
}
