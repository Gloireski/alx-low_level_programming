#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: param
 * Return: ...
 */
void rev_string(char *s)
{
	int c = 0, d, e;
	char *tmps, chg;

	tmps = s;
	while (s[c] != '\0')
	{
		c++;
	}
	for (d = 1; d < c; d++)
	{
		tmps++;
	}
	for (e = 0; e < (c / 2); e++)
	{
		chg = s[e];
		s[e] = *tmps;
		*tmps = cg;
		tmps--;
	}
}
