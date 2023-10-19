#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 *add_node_end -used to add a new node at end of linked list
 * @head: is used as a double pointer to the list_t list
 * @str: is a string used to put in the new node
 * Return: it shows the address of the new element on success,
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x;
	list_t *t = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	x = malloc(sizeof(list_t));
	if (!x)
	return (NULL);

	x->str = strdup(str);
	x->len = len;
	x->next = NULL;

	if (*head == NULL)
	{
	*head = x;
	return (x);
	}

	while (t->next)
	t = t->next;

	t->next = x;

	return (x);
}
