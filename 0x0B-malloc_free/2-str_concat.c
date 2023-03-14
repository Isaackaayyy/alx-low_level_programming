#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - A function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated.
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		continue;

	a = (char *)malloc(sizeof(char) * a);

	for (j = 0; s2[j] != '\0'; j++)
	{
		s1[i] = s2[j];
		i++;
	}
	a = s1[i];

	a != '\0';

	return (a);
}
