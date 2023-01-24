#include "main.h"

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
	while (i < n)
	{	s += va_arg(ap, unsigned int);
		i++;
	}
	va_end(ap);

	return (s);
}
