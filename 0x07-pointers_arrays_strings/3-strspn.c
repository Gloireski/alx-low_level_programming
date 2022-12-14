#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: character
 * Return:  number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0, i = 0, j;

	while (s[i] != 32)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
			}
		}
		i++;
	}
	return (c);
}
