#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: the null terminated string
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fptr;
	int l = 0;

	if (filename == NULL)
		return(-1);

	fptr = fopen(filename, "a");
	if (fptr == NULL)
		return (-1);

	if (text_content[l] == '\0')
		fclose(fptr);

	return (1);
}
