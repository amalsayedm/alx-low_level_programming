#include "main.h"

/**
 *_puts - Prints a string to stdout.
 *
 *@str: input
 */

void _puts(char *str)
{
	do {

		_putchar(*str);
	} while (*str++);
	_putchar('\n');
}
