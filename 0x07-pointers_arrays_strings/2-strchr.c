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
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s);
		else
		i++;
	}
	return (s);
}
