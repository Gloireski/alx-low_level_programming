#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: sep.
 * @n: nb of integers.
 * Return: ...
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n != 0 && separator != NULL)
	{
		va_start(ap, n);
		while (i < n)
		{
			printf("%d", va_arg(ap, int));
			if (!(i == n - 1))
				printf("%s", *separator);
		}
		va_end(ap);
		return (s);
	}
	return (0);
}
