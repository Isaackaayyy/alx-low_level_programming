#include "main.h"
#include <string.h>

/**
 * _strncat - concatinating two strings
 *
 * @dest: First string
 * @src: Second string
 * @n: integer value
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
