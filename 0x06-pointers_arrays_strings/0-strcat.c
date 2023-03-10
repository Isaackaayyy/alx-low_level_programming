#include "main.h"

/**
 * *_strcat - Apendind a string to another string
 *
 * @dest: The first string
 * @src: String to be appended to the next string
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
