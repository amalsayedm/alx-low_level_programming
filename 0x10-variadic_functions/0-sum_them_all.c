#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - add all its paramters.
 * @n: The number of paramters
 * @...: A variable number of params
 * Return: the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list parms;
	unsigned int i, sum = 0;

	va_start(parms, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
