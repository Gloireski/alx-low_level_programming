#ifndef _LINKED_LIST
#define _LINKED_LIST

/**
 * struct listint_s - singly linked list
 * @n: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _strlen(const char *s);
size_t print_listint(const listint_t *h);

#endif
