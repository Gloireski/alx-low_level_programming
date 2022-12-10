#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
		int i;
		char ch = 'a';

		for (i = 1; i <= 10; i++)
		{
			putchar(i % 10 + '0');
		}
		while (ch <= 'f')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		return (0);
}
