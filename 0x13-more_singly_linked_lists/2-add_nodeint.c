#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_nodeint - Adds a new node at the beginning of a list
  * @head: The original linked list
  * @n: The integer to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
			return (NULL);

		temp->n = n;
		temp->next = *head;

		*head = temp;

		return (temp);
	}

	return (0);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
