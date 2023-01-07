#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest:destination
 * @src: sourcei
 * @n: size
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[c] = src[i];
		c++;
	}

	if (i <= n)
		dest[c] = '\0';

	return (dest);
}
