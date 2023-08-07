#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int ptr;
	ssize_t letters;

	if (filename == NULL)
		return (-1);

	ptr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR + S_IWUSR);
	if (ptr == -1)
		return (-1);

	if (text_content != NULL)
	{
		letters = write(ptr, text_content, strlen(text_content));
		if (letters == -1)
		{
			close(ptr);
			return (-1);
		}
	}

	close(ptr);
	return (1);
}
