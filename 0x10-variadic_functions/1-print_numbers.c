#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints the given numbers
 * @separator: sperator to be printed
 * @n: arguments count
 * @...: A variable number of params
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list parms;
	unsigned int i;

	va_start(parms, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(parms, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

va_end(parms);
printf("\n");

}
