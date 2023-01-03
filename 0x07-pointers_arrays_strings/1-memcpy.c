#include "main.h"

/**
 * _memcpy -  fills memory with a constant byte.
 * @dest: pointer to string
 * @src: byte
 * @n: integer
 * Return: pointer to the memory area s.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
