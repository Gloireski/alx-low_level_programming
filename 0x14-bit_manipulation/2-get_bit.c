#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index.
  * @n: The number.
  * @index: the index
  *
  * Return: Nothing
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c = 0;

	if (index > n)
		return (-1);
	while (n)
	{
		if (c == index)
		{
			if (n & 1)
				return (1);
			else
				return (0);
		}
		n = n >> 1;
		c++;
	}

	if (index > c && index < 63)
		return (0);
	return (-1);
}
