#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * pop_listint - deletes the head node of list.
  * @head: headnode pointer.
  *
  * Return: headnode data.
  */

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int hd = 0;

	if (head)
	{
		if (*head)
		{
			new_head = (*head)->next;
			hd = (*head)->n;
			(*head)->next = NULL;
			free(*head);
			*head = new_head;
		}
	}
	return (hd);
}

