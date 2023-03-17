#include <stdio.h>
/**
* main - Prints all possible combinations of two different digits,
* in ascending order, separated by a comma followed by a space.
* Return: Always 0.
*/
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		n2 = n1 + 1;
		while (n2 < 10)
		{
			putchar(n1 + '0');
			putchar(n2 + '0');
			if (n1 == 8 && n2 == 9)
				break;

			putchar(',');
			putchar(' ');
			n2++;
		}
	}
	putchar('\n');

	return (0);
}
