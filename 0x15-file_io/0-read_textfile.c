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
	char a[1024];
	size_t l = 0;

	if (filename == NULL)
		return (0);

	fptr = fopen(filename, "r");
	if (fptr == NULL)
		return (0);

	l = fread(a, 1, letters > sizeof(a) ? sizeof(a): letters, fptr);

	while (letters > 0 && l > 0)
	{
		fwrite(a, 1, l, stdout);
		letters -=  l;
	}
	fclose(fptr);
	return (l);
}
