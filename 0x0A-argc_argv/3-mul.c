#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the mult of 2 numbers
 * @argc: argument count
 * @argv: input array
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int res = 0;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

res = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", res);

	return (0);
}
