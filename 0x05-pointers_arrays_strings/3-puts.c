#include "main.h"

/**
 *_puts - Prints a string to stdout.
 *
 *@str: input
 */

void _puts(char *str)
{
	if (*str != " ")
	{
	do {
		_putchar(*str);

	} while (*(++str) != '\0');
	_putchar('\n');
	}
}
