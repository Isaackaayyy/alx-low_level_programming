#include "main.h"

/**
 * wildcmp - Comparing two strings using recursion
 *
 * @s1: First string
 * @s2: Second string
 * @c: index for s1
 * @d: index for s2
 *
 * Return: integer
 */

int _com_two_str(char *s1, char *s2, int c, int d);

int wildcmp(char *s1, char *s2)
{
	int val, c = 0, d = 0;

	val = _com_two_str(s1, s2, c, d);

	return (val);
}

/**
 * _com_two_str - counting and comparing two strings
 *
 * @s1: First string
 * @s2: Second string
 * @c: index for s1
 * @d: index for s2
 *
 * Return: integer
 */

int _com_two_str(char *s1, char *s2, int c, int d)
{
	if (s1[c] == '\0' && s2[d] == '\0')
		return (1);
	if (s1[c] == s2[d])
		return (_com_two_str(s1, s2, c++, d++));
	if (s1[c] == '\0' && s2[d] == '*')
		return (_com_two_str(s1, s2, c, d++));
	if (s2[d] == '*')
		return (_com_two_str(s1, s2, c++, d) || _com_two_str(s1, s2, c, d++));
	return (0);
}
