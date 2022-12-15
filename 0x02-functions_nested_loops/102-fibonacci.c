#include <stdio.h>
/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 * Return: 0;
 */
int main(void)
{
	int n;

	for (n = 1; n < 50; n++)
	{
		if (n <= 2)
		{
			printf("%d, ", n);
		}
		else if (n == ((n - 1) + (n - 2)))
		{
			printf("%d, ", n);
		}
	}
	return (0);
}
