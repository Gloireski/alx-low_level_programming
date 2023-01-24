#include "variadic_functions.h"

/**
 * sum_them_all - sum of args
 * @n: first arg
 * Return: integer.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s = 0;
	va_list ap;

	if (n != 0)
	{
		va_start(ap, n);
		while (i < n)
		{
			s += va_arg(ap, int);
			i++;
		}
		va_end(ap);
		return (s);
	}
	return (0);
}
