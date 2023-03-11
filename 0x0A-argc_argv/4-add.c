#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 *
 * @argc: counter
 * @argv: vector
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *end;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			strtol(argv[i], &end, 10);
			if (*end)
			{
				printf("Error\n");
				return (1);
			}
			else if (atoi(argv[i]) > 0)
				sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
