#include "lists.h"

/**
 * delete_dnodeint_at_index - used to delete the node at
 *		  index of a dlistint_t linked list
 * @head: is the beginning of the list
 * @index: is the index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *x;
	dlistint_t *y;
	unsigned int t;

	x = *head;

	if (x != NULL)
		while (x->prev != NULL)
			x = x->prev;

	t = 0;

	while (x != NULL)
	{
		if (t == index)
		{
			if (t == 0)
			{
				*head = x->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				y->next = x->next;

				if (x->next != NULL)
					x->next->prev = y;
			}

			free(x);
			return (1);
		}
		y = x;
		x = x->next;
		t++;
	}

	return (-1);
}
