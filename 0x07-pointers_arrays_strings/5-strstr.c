#include "main.h"

/**
 * _strstr - A function that locates a substring
 *
 * @haystack: String
 * @needle: substring
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + 1);
	}
	return (0);
}
