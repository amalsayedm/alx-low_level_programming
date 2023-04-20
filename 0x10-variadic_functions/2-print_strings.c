#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @separator: sperator to be printed
 * @n: arguments count
 * @...: A variable number of params
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	char *str;
va_list parms;
	unsigned int i;

	va_start(parms, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(parms, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(parms);
	printf("\n");

}
