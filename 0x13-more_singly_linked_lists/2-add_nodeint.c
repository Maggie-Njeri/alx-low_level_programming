#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: is a pointer to the first node in a linked list
 * @n: is the data to be inserted in the new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *x;

	x = malloc(sizeof(listint_t));

	if (!x)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = x;
	return (x);
}
