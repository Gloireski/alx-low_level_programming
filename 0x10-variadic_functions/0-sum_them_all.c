#include "main.h"
#include <stdio.h>
#include <varargs.h>

/**
 * sum_them_all - sum of args
 * @n: first arg
 * Return: integer.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int s = 0, i;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	i = n;
	while (i)
	{	i = va_arg(ap, unsigned int);
		s += i;
	}
	va_end(ap);

	return (s);
}
