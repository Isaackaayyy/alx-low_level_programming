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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
