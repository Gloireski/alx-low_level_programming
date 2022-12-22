#include "main.h":

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: size of array
 * Return: ...
 */

void reverse_array(int *a, int n)
{
	int *tmp, cp = 0, c = n, i;

	tmp = a;
	for (i = 0; i < n; i++)
	{
		cp = a[i];
		a[i] = tmp[c];
		tmp[c] = cp;
		c--;
	}
}
