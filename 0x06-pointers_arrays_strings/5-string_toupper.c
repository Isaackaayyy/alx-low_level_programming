#include "main.h"

/**
 * string_toupper - Changing lowercase characters to uppercase characters.
 *
 * @s: Array
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}
