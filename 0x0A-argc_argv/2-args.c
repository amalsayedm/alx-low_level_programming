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

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
