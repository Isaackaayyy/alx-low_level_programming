#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 *	if the file can not be opened or read, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ptr;
	char *a;
	ssize_t num_of_letters, read_letters;

	if (filename == NULL)
		return (0);

	ptr =  open(filename, O_RDONLY);
	if (ptr == -1)
		return (0);

	a = (char *)malloc((letters + 1) * sizeof(char));
	if (a == NULL)
	{
		close(ptr);
		return (0);
	}

	read_letters = read(ptr, a, letters);
	if (read_letters<= 0)
	{
		free(a);
		close(ptr);
		return (0);
	}

	num_of_letters = write(STDOUT_FILENO, a, read_letters);
	free(a);
	close(ptr);

	if (num_of_letters != read_letters)
		return (0);

	return (num_of_letters);
}
