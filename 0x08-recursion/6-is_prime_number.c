#include "main.h"

int disible(int num, int d);
int is_prime_number(int n);

/**
 * disible - Checks  number is disible.
 * @num: The number
 * @d: The disor.
 * Return: If the number is disible or not.
 */
int disible(int num, int d)
{
	if (num % d == 0)
		return (0);

	if  (d == num / 2)
		return (1);

	return  (disible(num, d + 1));
}

/**
 * is_prime_number - Checks number is prime.
 * @n: The number
 * Return: return the result
 */

int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (disible(n, d));
}
