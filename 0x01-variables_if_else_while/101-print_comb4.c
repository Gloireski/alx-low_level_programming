#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 8)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				if (!(i == j && j == k))
				{
					putchar(i % 10 + '0');
					putchar(j % 10 + '0');
					putchar(k % 10 + '0');
					if (!(i == 7 && j == 8 && k == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
