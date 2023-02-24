#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* Description: printing positive or negative numbers */

/* betty style doc for function main goes there */

/**
 * main - entry point
 *
 * Description: printing positive or negative numbers
 *
 * Return: 0 Always (success)
 */

int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		if (n > 0)
			printf("%d is positive\n", n);
		else if (n == 0)
			printf("%d is zero\n", n);
		else
			printf("%d is negative\n", n);

		return (0);
}
