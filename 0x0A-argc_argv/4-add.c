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
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (argc >= 'A' && argc <= 'Z')
			{
				printf("Error\n");
				return (1);
			}
			if (argc >= 'a' && argc <= 'z')
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (SUCCESS);
}
