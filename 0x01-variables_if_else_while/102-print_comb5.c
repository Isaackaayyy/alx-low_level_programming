#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int w, x, y, z;

	for (w = 0; w < 100; w++)
	{
		for (x = 0; x < 100; x++)
		{
			putchar(w);
			putchar(x);

			for (y = 0; y < 100; y++)
			{
				for (z = 0; z < 100; z++)
				{
					putchar(y);
					putchar(z);


				}
			}
		}
	}
	return (0);
}
