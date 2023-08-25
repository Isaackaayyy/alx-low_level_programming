#include "main.h"

/**
 * _strcpy - Copy a string including the null byte
 * @dest: destination string
 * @src: source string
 * Return: character value
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}


/**
 * _strcat - Apendind a string to another string
 * @dest: The first string
 * @src: String to be appended to the next string
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}


/**
 * _strncat - concatinating two strings
 * @dest: First string
 * @src: Second string
 * @n: integer value
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}


/**
 * _atoi - Converts a string to an integer
 * @s: Parameter
 *Return: 0 on success
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int number = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');
		else if (number > 0)
			break;
	} while (*s++);

	return (number * sign);
}
