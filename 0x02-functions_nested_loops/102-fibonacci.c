#include <stdio.h>
/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 * Return: 0;
 */
int main(void)
{
	int n;
       long i = 1, j = 2;

	for (n = 1; n <= 50; n++)
	{
		if (n == 1)
		{
			printf("%ld ", i);
		}
		else if (n == 2)
		{
			printf("%ld, ", j);
		}
		else
		{
			j = i + 1;
			i = j - i;
			printf("%ld, ", j);
		}
	}
	return (0);
}
