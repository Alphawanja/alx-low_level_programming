#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head of doubly linked list
 * @index: index to look for
 *
 * Return: address to the node if index exists else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	while (tmp)
		tmp = tmp->next, count++;

	if (index > (count - 1))
		return (NULL);

	for (count = 0; count < index; count++)
		head = head->next;

	return (head);
}
