#include "main.h"

/**
 * create_file - create a file
 * @filename: nmae of the filename
 * @text_content: content of the file
 * Return: 1 on success or -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fptr;
	int r = 0;

	if (!filename)
		return (-1);


	fptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!fptr)
		return (-1);

	if (text_content)
	{
		while (text_content[r])
			r++;
		write(fptr, text_content, r);
	}
	close(fptr);
	return (1);
}
