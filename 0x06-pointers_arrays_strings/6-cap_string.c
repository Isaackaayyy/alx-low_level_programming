#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string
 *
 * @s: String
 *
 * Return: char
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}
