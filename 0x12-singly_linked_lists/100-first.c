#include <stdio.h>

void _print_message(void) __attribute__((constructor));

/**
 * _print_message - Function before the main function
 */


void _print_message(void)
{
	printf("You're beat! and yet, you must allow,\\nI bore my house upon ");
	printf("my back!\\n\n");
}

/**
 * _print - Main function
 * Return: 0
 */

int _print(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, ");
	printf("challenges one to a race.)\n");

	return (0);
}
