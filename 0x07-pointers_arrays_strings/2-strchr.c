#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: character
 * Return:  a pointer to the first occurrence of
 * the character c in the string s, or NULL if
 * the character is not found
 */

char *_strchr(char *s, char c);
{
	int i = 0, j = 0;
	char *p;

	while (s[i])
	{
		if (s[i] == c)
			break;
		i++;
	}
	if (s[i] == c)
	{
		while (s[i])
		{
			p[j] = s[i];
			i++;
			j++
		}
	}
	return (p);
}
