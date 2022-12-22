#include "main.h"

/**
 * _strcmp - compare two strings.
 * @s1: first string
 * @s2: second string
 * Return: 0 if the strings are same
 */

int _strcmp(char *s1, char *s2)
{
	int i, cmp = 0, stp = 0;
	int c = 0, d = 0;

	while (s1[c])
	{
		c++;
	}

	while (s2[d])
	{
		d++;
	}

	if (c > d)
	{
		stp = c;
	}
	else
	{
		stp = d;
	}
	for (i = 0; i < stp; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			cmp = s1[i] - s2[i];
			break;
		}
	}

	return (cmp);
}
