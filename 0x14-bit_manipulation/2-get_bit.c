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
	int b;

	if (index > n)
		return (-1);
	while (c != index)
	{
		if (n < 1)
			break;
		n = n >> 1;
		c++;
	}
	if (c == index)
	{
		if (n & 1)
			b = 1;
		else
			b = 0;
	}
	return (b);
}
