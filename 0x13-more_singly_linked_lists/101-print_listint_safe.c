#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 *looped_listint_len - used to calculate the number of unique nodes
 * in a linked list
 * @head: the address of the first element in the linked list to chech
 * Return:the number of unique nodes in the list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tartaruga, *hobbit;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	tartaruga = head->next;
	hobbit = (head->next)->next;

	while (hobbit)
	{
	if (tartaruga == hobbit)
	{
	tartaruga = head;
	while (tartaruga != hobbit)
	{
	n++;
	tartaruga = tartaruga->next;
	hobbit = hobbit->next;
	}

	tartaruga = tartaruga->next;
	while (tartaruga != hobbit)
	{
	n++;
	tartaruga = tartaruga->next;
	}

	return (n);
	}

	tartaruga = tartaruga->next;
	hobbit = (hobbit->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe -used to prints a listint_t list safely
 * @head: address to first element
 * Return: number of elements in a list
 * if the function fails, exit the program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n, index = 0;

	n = looped_listint_len(head);

	if (n == 0)
	{
	for (; head != NULL; n++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}

	else
	{
	for (index = 0; index < n; index++)
	{
	 printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n);
}
