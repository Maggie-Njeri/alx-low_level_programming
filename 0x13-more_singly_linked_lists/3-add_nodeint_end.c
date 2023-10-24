#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of a limked list
 * @head: is a pointer at the beginning of a linked list
 * @n: is the adta to be inserted in the new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *s = *head;

	x = malloc(sizeof(listint_t));

	if (!x)
		return (NULL);
	x->n = n;
	x->next = NULL;
	if (*head == NULL)
	{
	*head = x;
	return (x);
	}
	while (s->next)
		s = s->next;
		s->next = x;

	return (x);
}
