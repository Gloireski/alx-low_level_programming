#include "main.h"

/**
 * _strcpy - copies the string pointed to by src.
 * @dest:destination
 * @src: source
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	while (j <= i + 1)
	{
		*dest = src[j];
		dest++;
		j++;
	}

	return (*dest);
}
