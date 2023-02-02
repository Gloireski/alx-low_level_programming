#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - returns the sum of all the data (n) of a listint_t.
  * @head: headnode pointer.
  *
  * Return: integer.
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}

