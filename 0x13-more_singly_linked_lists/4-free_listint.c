#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: is the address to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *s;

	while (head)
	{
	s = head->next;
	free(head);
	head = s;
	}
}
