#include "main.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: the name of the file
 * @text_content: The string
 * Return: 1 Or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, bytes, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);

	}

	bytes = write(file, text_content, size);

	if (bytes == -1)
		return (-1);

	close(file);

	return (1);
}
