#include "main.h"
/**
 * _abs - checks the absolute value of an integer
 * @n: The integer to check
 * Return: positive value f number or 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
