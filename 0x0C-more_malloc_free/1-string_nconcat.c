#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Parameter
 * Return: pointer shall point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, l1, l2;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		continue;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		continue;
	if (n >= l2)
		n = l2;

	p = malloc(sizeof(char) * (l1 + n + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++)
		p[l1 + j] = s2[j];

	p[l1 + n] = '\0';

	return (p);
}
