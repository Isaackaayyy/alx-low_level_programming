#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 *
 * @argc: counter
 * @argv: vector
 *
 * Return: integer
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
