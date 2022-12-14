#include <unistd.h>
/**
 * _islower - checks for lowercase character
 * @c: The character to check
 * Return: if c is lowercase 1.
 * Otherwise, 0 is returned.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
