#include <unistd.h>
/**
 * _islower - checks for lowercase character
 * @c: The character to check
 * Return: if c is lowercase 1.
 * Otherwise, 0 is returned.
 */
int _islower(int c)
{
	char t = 'a';
	int r = 0;

	while (t <= 'z')
	{
		if (c == t)
		{
			r = 1;
			break;
		}
		c++;
	}
	return (r);
}
