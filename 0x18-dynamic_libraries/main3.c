#include "main.h"


/**
 * _strncpy - Coping a string
 * @dest: Destination string
 * @src: Source string
 * @n: integer value
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}


/**
 * _strcmp - compares two strings
 * @s1: first member
 * @s2: second member
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}



/**
 * _memset - filling the memory with a constant byte.
 * @s: Pointer
 * @b: Array
 * @n: size
 * Return: Pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}


/**
 * _memcpy - Writing a function that copies memory area
 * @dest: Destination array
 * @src: Source array
 * @n: size of char
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
