#include "main.h"

/*
 * print_alphabet_x10 - "ssksdak"
 */

void print_alphabet_x10(void)
{
	int count;
	char n;

	for (count = 0 ; count <= 10 ; count++)
	{
		for (n = 'a' ; n <= 'z' ; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
