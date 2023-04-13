#include "main.h"

/**
 * read_textfile - read a text file and prints it to the POSIX standard output
 * @filename: Pointer to the file to read
 * @letters: number of letters that could be read and printed from the file
 * Return: number of letters read and priinted from the file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char a;
	size_t r = 0;

	if (filename == NULL)
		return (r);

	fptr = fopen(filename, "r");
	if (fptr == -1)
		return (r);

	letters = 0;

	while (!feof(fptr))
	{
		a = fgetc(fptr);
		printf("%c", a);
		letters++;
	}

	fclose(fptr);
	return (letters);
}
