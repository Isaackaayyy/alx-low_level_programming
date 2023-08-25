#include "main.h"

/**
 * _strchr - A function that locates a character in a string.
 * @s: Pionter string
 * @c: Character to locate
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


/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: string
 * @accept: prefix
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



/**
 * _strpbrk -  a string for any of a set of bytes.
 * @s: string
 * @accept: string
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b = 0;
	char *c;

	while (s[a] != '\0')
	{
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				c = &s[a];
				return (c);
			}
			b++;
		}
		a++;
	}

	return (0);
}



/**
 * _strstr - A function that locates a substring
 * @haystack: String
 * @needle: substring
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
