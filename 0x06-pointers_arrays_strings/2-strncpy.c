#include "main.h"
#include <string.h>

/**
 * _strncpy - Coping a string
 *
 * @dest: Destination string
 * @src: Source string
 * @n: integer value
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
