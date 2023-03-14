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
	int i, j, k, l, m, n;

	if (s1 || s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		continue;
	for (j = 0; s2[j] != '\0'; j++)
		continue;

	k = i + j;

	a = malloc(k * (sizeof(char)) + 1);

	if (a == NULL)
		return (NULL);

	for (l = 0; s1[l] != '\0'; l++)
		a[l] = s1[l];
	for (m = l, n = 0; s2[n] != '\0'; m++, n++)
		a[m] = s2[n];

	a[m] = '\0';

	return (a);
}
