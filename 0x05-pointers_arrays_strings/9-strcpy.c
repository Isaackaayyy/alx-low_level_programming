#include "main.h"

/**
 * _strcpy - Copy a string including the null byte
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: character value
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
