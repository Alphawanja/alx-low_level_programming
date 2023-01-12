#include "lists.h"

/**
 * dlistint_len - returns length of linked list
 * @h: doubly linked list
 * Return: number of elements in a linked dlistint list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
		h = h->next, length++;

	return (length);
}
