#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: character1
 * Return:  a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; j <= i; j++)
		{
			if (s[j] == accept[j])
			{
				s += j;
				return (s);
			}
		}
		i++;
	}
	return ('\0');
}
