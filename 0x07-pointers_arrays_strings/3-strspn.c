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
	unsigned int c = 0;
	int i, j;

	while (s[i])
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
			}
			else
				break;
		}
		i++;
	}
}
