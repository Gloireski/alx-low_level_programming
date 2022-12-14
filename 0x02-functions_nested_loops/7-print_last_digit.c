#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: The integer to check
 * Return:  the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = n * -1;
	last_digit = n % 10;
	_putchar(last_digit);
	return (last_digit);
}
