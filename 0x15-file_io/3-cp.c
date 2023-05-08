#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_temp(char *file);

/**
 * create_temp - allocate  memmory
 * @file: file name
 * Return: the allocated buffer
 */
char *create_temp(char *file)
{
	char *temp;

	temp = malloc(sizeof(char) * 1024);

	if (temp == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (temp);
}

/**
 * main - Copies the contents from file to another
 * @argc: The number of arguments
 * @argv: the arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int ffile, tofile, readres, w, closefile;
	char *temp;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	temp = create_buffer(argv[2]);
	ffile = open(argv[1], O_RDONLY);
	if (ffile == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(temp);
			exit(98);
	}
	readres = read(ffile, temp, 1024);
	tofile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (tofile == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(temp);
			exit(99);
	}

	do {
		if (readres == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(temp);
			exit(98);
		}

		w = write(tofile, temp, readres);
		if (tofile == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(temp);
			exit(99);
		}

		readres = read(ffile, temp, 1024);
		tofile = open(argv[2], O_WRONLY | O_APPEND);

	} while (readres > 0);

	free(temp);
	closefile = close(ffile);
	if (closefile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffile);
		exit(100);
	}
	closefile = close(tofile);
	if (closefile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tofile);
		exit(100);
	}
	return (0);
}
