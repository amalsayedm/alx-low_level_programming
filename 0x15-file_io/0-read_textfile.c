#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads and print from text file
 * @filename: the name of the file
 * @letters: The number of letters to be read
 *
 * Return: the actual number of bytes the function read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openfile, readbytes, writebytes;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	openfile = open(filename, O_RDONLY);
	if (openfile == -1)
	{
		free(temp);
		return (0);
	}
	readbytes = read(openfile, temp, letters);
	writebytes = write(STDOUT_FILENO, temp, readbytes);

	if (readbytes == -1 || writebytes == -1 || writebytes != readbytes)
	{
		free(temp);
		return (0);
	}

	free(temp);
	close(openfile);

	return (writebytes);
}
