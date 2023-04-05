#include "main.h"
#include<stdio.h>

/**
 * _puts_recursion - prints astring
 * @s: the input string
*/

void _puts_recursion(char *s)
{

				if (*s)
				{
					putchar(*s);
					s++;
				_puts_recursion(s);
				}
				else
				{
					putchar('\n');
					return;
				}
}
