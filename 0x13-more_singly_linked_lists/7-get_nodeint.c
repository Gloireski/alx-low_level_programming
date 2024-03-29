#include <stdlib.h>
#include "lists.h"

/**
  * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
  * @head: headnode pointer.
  * @index: is the index of the node, starting at 0.
  *
  * Return: listint_t.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head && index != count)
		{
			head = head->next;
			count++;
		}
	}
	if (count == index)
		return (head);
	else
		return (NULL);
}

