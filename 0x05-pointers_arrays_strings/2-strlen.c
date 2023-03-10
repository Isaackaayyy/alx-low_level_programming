#include "main.h"

/**
 * _strlen - length of a string
 *
 * @s: first value
 *
 * Return: unsigned int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return  (i);
}
