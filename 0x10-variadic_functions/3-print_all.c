#include "variadic_functions.h"

/**
 * print_all -  prints anything, followed by a new line.
 * @format: ...
 * Return: ...
 */

void print_all(const char * const format, ...);
{
	unsigned int i = 0, j = 0;
	va_list args;
	char *separator "";
	f_dt form_types[] = {
		{ "c", print_char },
		{ "i", print_int },
		{ "f", print_float },
		{ "s", print_char_ptr }
	};



	if (n > 0)
	{
		va_start(ap, n);
		while (i < n)
		{
			string = va_arg(ap, char*);
			if (string == NULL)
				printf("(nil)");
			else
				printf("%s", string);
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(ap);
	}
	printf("\n");
}
