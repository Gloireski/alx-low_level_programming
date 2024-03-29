#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: sep.
 * @n: nb of integers.
 * Return: ...
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	if (n > 0)
	{
		va_start(ap, n);
		while (i < n)
		{
			printf("%d", va_arg(ap, int));
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(ap);
	}
	printf("\n");
}
