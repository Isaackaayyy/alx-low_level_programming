#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - entry point
 *
 * Description: Printing the last digit
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int n;
	int lst_dgt = 'n' % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (lst_dgt > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, lst_dgt);
	else if (lst_dgt == 0)
		printf("last digit of %d is %d and is 0\n", n, lst_dgt);
	else if (lst_dgt < 6 && lst_dgt != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lst_dgt);

	return (0);
}
