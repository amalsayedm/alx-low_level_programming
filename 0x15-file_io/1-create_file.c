
#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: file's name
 * @text_content: a string to be written
 * Return: -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
	int file, bytes;
	int size;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

bytes = write(file, text_content, size);

	if (bytes == -1)
		return (-1);

	close(file);

	return (1);
}
