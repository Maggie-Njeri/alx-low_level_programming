#include "lists.h"

/**
 * add_dnodeint - used to add a new node at the beginning
 * of a dlistint_t list
 * @head: is the head of the list
 * @n: is the value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nuova;
	dlistint_t *h;

	nuova = malloc(sizeof(dlistint_t));
	if (nuova == NULL)
		return (NULL);

	nuova->n = n;
	nuova->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	nuova->next = h;

	if (h != NULL)
		h->prev = nuova;

	*head = nuova;

	return (nuova);
}
