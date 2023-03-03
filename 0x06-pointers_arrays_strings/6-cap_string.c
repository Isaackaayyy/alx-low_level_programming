#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string
 *
 * @s: String
 *
 * Return: char
 */

char *cap_string(char *s)
{
	int i, c;
	int trigger;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (i = 0, trigger = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			trigger = 1;
		for (c = 0; nots[c] != '\0'; c++)
		{
			if (nots[c] == s[i])
				trigger = 1;
		}

		if (trigger)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] -  32;
				trigger = 0;
			}
			else if (s[i] >= 65 && s[i] <= 90)
				trigger = 0;
			else if (s[i] >= 48 && s[i] <= 57)
				trigger = 0;
		}
	}
	return (s);
}
