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
		continue;

	a = (char *)malloc(sizeof(char)* a);

	if (a == NULL)
		return (NULL);

	for (j = 0; a[j] != '\0'; j++)
		a[j] = str[i];

	a[j] = '\0';

	return (a);
}
