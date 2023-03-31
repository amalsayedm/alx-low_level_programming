#include "main.h"

/**
 *reverse_array - Reverses the content of an array
 *@a: The array of integers
 *@n: The number of elements
 */

void reverse_array(int *a, int n)
{
	int tmp, int i;

	for (i = 0; i <= n / 2; i++)
	{
		tmp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = tmp;
	}
}
