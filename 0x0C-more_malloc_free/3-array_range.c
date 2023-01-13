#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: param.
 * @max: param.
 * Return: integer.
 */

int *array_range(int min, int max)
{
	int *p, i = 0, l;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	p = malloc(sizeof(int) * l);
	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
