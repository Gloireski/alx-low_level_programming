#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary to convert;
 *
 * Return: converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, sum = 0, c = 0;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);
		if (b[len] == 49)
			sum += 1 << c;
		c++;
	}
	return (sum);

}

/**
 * _strlen - returns the length of a string
 * @s: param
 * Return: lenght of s
 */

int _strlen(const char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
