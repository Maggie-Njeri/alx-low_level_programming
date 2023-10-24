#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: the data to be inserted in the new node
 * @head: a pointer to the first element in a linked list.
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *x;
	listint_t *s = *head;

	x = malloc(sizeof(listint_t));

	if (!x || !head)
		return (NULL);
	x->n = n;
	x->next = NULL;

	if (idx == 0)
	{
	x->next = *head;
	*head = x;
	return (x);
	}

	for (j = 0; s && j < idx; j++)
	{

	if (j == idx - 1)
	{
	x->next = s->next;
	s->next = x;

	return (x);
	}

	else
	s = s->next;
	}

	return (NULL);
}
