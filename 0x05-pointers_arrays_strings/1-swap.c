#include "main.h"

/**
 *swap_int - Swaps the values of two integers.
 *@a: input
 *@b: seconded input
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
