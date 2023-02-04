#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index.
  * @n: The number.
  * @index: the index
  *
  * Return: int.
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int c = 0;

	if (n == NULL)
		return (-1);
	if (index > *n)
		return (-1);
	while (*n)
	{
		if (c == index)
		{
			if (!(*n & 1))
				*n = 1;
		}
		*n = (*n) >> 1;
		c++;
	}

	if (index > c && index < 63)
		return (0);
	return (-1);
}
