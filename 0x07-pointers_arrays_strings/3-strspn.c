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
	unsigned int i = 0, j, count = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (count);
}
