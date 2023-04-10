#include <stdio.h>

/**
 * main - Prints the program argument couunt
 * @argc: argument count
 * @argv: input array
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	/* code */
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
