#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: sep.
 * @n: nb of integers.
 * Return: ...
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	if (n > 0)
	{
		va_start(ap, n);
		while (i < n)
		{
			if (va_arg(ap, int) == NULL)
			{
				printf("(nil)");
			}
			else
				printf("%s", va_arg(ap, int));
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(ap);
	}
	printf("\n");
}
