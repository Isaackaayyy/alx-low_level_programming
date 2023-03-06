#include "main.h"

/**
 * _strchr - A function that locates a character in a string.
 *
 * @s: Pionter string
 * @c: Character to locate
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0';)
	{
		if (s[i] == c)
			return (s + 2);
		i++;
	}
	return (s);
}
