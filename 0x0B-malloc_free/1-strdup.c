#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string
 * Return: char
 */

char *_strdup(char *str)
{
	char *a;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc((i * sizeof(char)) + 1);

	if (a == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		a[j] = str[j];

	a[j] = '\0';

	return (a);
}
