#include "main.h"

/**
 * _memcpy - Writing a function that copies memory area
 *
 * @dest: Destination array
 * @src: Source array
 * @n: size of char
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
