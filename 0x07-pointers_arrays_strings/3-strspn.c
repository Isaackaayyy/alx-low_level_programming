#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 *
 * @s: string
 * @accept: prefix
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = -2;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
				count++;
		}
	}
	return (count);
}
