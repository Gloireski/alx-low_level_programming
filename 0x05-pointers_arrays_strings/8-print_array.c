#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 * @a: array
 * @n: integer
 * Return: ...
 */
void print_array(int *a, int n)
{
	int i, c = 0;

	while (a[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == c)
		printf("%d, ", a[i]);
	_putchar('\n');
}
