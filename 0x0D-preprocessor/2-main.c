#include <stdio.h>

/**
 * main - Printing the name of the file it was compiled from
 * Return: Returnint the name of the file
 */

int main(void)
{
	printf("%s\n",  __FILE__);

	return (0);
}
