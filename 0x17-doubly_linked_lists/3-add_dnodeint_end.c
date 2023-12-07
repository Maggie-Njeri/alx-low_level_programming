#include "lists.h"

/**
 * add_dnodeint_end - is used to add a new node at the
 *		 end of a dlistint_t list
 * @head:is the beginning of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *x;
	dlistint_t *a;

	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;
	a->next = NULL;

	x = *head;

	if (x != NULL)
	{
		while (x->next != NULL)
			x = x->next;
		x->next = a;
	}
	else
	{
		*head = a;
	}

	a->prev = x;

	return (a);
}
