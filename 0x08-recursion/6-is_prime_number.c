#include "main.h"

int divsible(int num, int div);
int is_prime_number(int n);

/**
 * divsible - Checksnumber is divisible.
 * @num: The number
 * @div: The divisor.
 *
 * Return: is divisible - 0.
 *         is not divisible - 1.
 */
int divsible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (divsible(num, div + 1));
}

/**
 * is_prime_number - Checks number is prime.
 * @n: The number to be checked.
 *
 * Return: is not prime - 0.
 *          is prime - 1.
 */
int is_prime_number(int n)
{
	int dv = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (divsible(n, dv));
}
