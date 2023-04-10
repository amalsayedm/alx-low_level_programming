#include <stdio.h>

/**
 * main - Prints the program arguments
 * @argc: argument count
 * @argv: input array
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc >= 0)
	{
		printf("%s\n", argv[i]);
		i++;
		argc = argc - 1;
	}

	return (0);
}
