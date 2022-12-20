#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: param
 * Return: ...
 */
void rev_string(char *s)
{
	int c = 0, d = 0;
	char *tmps;

	tmps = s;
	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		tmps[d] = s[c];
		d++;
	}

	*s = *tmps;
}
