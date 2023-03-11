#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: counter
 * @argv: vector
 *
 * Rerurn: integer
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	cents = atoi(argv[1]);

	if (argc < 0)
	{
		printf("0\n");
		return (1);
	}
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
		}
		if ((cents - 5) >= 0)
		{
			cents  -= 5;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
		}
		cents--;
	}
	printf("%d\n", coins);

	return (0);
}
