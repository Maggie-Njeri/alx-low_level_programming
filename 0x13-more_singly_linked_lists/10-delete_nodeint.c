#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - used to delete the node at index of a linked list
 * @index: is the index of the node that should be deleted. Index starts at 0
 * @head: is a pointer to the first element in a linked list
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *s = *head;
	listint_t *n = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(s);
	return (1);
	}

	while (j < index - 1)
	{
		if (!s || !(s->next))
			return (-1);
		s = s->next;
		j++;
	}
	n = s->next;
	s->next = n->next;
	free(n);

	return (1);
}
