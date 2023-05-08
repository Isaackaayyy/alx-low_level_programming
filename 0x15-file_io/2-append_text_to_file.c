#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ptr;
	ssize_t letters;

	if (filename == NULL)
		return (-1);

	ptr = open(filename, O_WRONLY | O_APPEND);
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
