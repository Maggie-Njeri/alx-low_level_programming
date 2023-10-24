#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list
 * @head: is the addresss to be freed
 * Return: sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *s;

	if (head == NULL)
		return;

	while (*head)
	{
	s = (*head)->next;
	free(*head);
	*head = s;
	}

	*head = NULL;
}
