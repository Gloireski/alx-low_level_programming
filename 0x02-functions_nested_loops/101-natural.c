#include <stdio.h>
/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 * Return: 0;
 */
int main(void)
{
	int n, z = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			z += n;
		}
	}
	printf("%d", z);
	return (0);
}
