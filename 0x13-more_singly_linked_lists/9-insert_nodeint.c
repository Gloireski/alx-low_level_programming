#include <stdlib.h>
#include "lists.h"

/**
  * insert_nodeint_at_index -  inserts a new node at a given position..
  * @head: headnode pointer.
  * @idx: index of the node.
  * @n: node value
  *
  * Return: addr of new node or NULL.
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c = 0;
	listint_t *temp;

	if (*head)
	{
		while (*head && c != idx)
		{
			*head = (*head)->next;
			c++;
		}
		if (c == idx)
		{
			temp = malloc(sizeof(listint_t));
			temp->n = n;
			temp->next = *head;
			*head = temp;
		}
		return (*head);
	}
	else
		return (NULL);
}

