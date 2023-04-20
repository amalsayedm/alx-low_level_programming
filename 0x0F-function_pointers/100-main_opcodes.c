#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 *  @argc: The number of arguments
 * @argv: An array arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int a, i;
	char *p = (char *) main;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < a; i++)
	{
		printf("%02hhx", *p);

		if (i == a - 1)
			continue;
		printf(" ");
		p++;
	}

	printf("\n");

	return (0);
}
