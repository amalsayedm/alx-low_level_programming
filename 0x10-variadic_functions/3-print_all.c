#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char.
 * @arg: A list of arguments
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - Prints an int.
 * @arg: the args
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - Prints a float.
 * @arg: A list of arguments
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - Prints a string.
 * @arg: A list of arguments
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Prints all
 * @format: characters representing the argument types.
 * @...: arguments to be printed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (funcs[j].symbol)
		{

			if (format[i] == funcs[j].symbol[0])
			{
				funcs[j].f(args);
		if (!format[i + 1] == '\0')
		{
			printf("%s", ", ");
		}
			}
			j++;

	}

		i++;
	}

	printf("\n");

	va_end(args);
}
