#include "3-calc.h"

/**
 * op_add - Add two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - get remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The remainder of a divided by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
