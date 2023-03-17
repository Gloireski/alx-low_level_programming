#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of list
 * @index: index of node
 *
 * Return: n or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (head && index != c)
	{
		head = head->next;
		c++;
	}
	if (index == c && head)
		return (head);
	else
		return (NULL);
}
