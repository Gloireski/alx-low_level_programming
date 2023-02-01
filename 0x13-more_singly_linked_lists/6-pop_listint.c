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
	int hd = 0;

	if (head)
	{
		if (*head)
		{
			temp = (*head)->n;
			(*head)->next = NULL;
			free(*head);
		}
	}
	return (hd);
}

