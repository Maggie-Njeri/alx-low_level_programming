#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: is a pointer for the first element in a linked lists
 * @index: is the index of the node, starting at 0
 * Return: returns the nth node,
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *s = head;

	while (s && n < index)
	{
	s = s->next;
	n++;
	}

	return (s ? s : NULL);
}
