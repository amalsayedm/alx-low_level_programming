#include<stdio.h>

/**
 *main - Prints the numbers from 1-100
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 != 0) && (num % 5 != 0))
			printf("%d", num);
		else
		{
			if (num % 3 == 0)
			printf("Fizz");
			if (num % 5 == 0)
			printf("Buzz");
		}

		printf(" ");
	}

	printf("\n");

	return (0);
}
