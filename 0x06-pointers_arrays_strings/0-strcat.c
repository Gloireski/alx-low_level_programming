#include "main.h"

/**
 * _strcat - copies the string pointed to by src.
 * @dest:destination
 * @src: source
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, c = 0;

	while (dest[0] != '\0')
	{
		c++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[c++] = src[i];
		c++;
	}

	dest[c++] = '\0';

	return (dest);
}
