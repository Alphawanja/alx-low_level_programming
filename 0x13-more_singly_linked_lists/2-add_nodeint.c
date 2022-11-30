#include "lists.h"

/**
 * add_nodeint - add a new node atthe beginning
 * of a linked list
 * @head: head of a list
 * @n: n element
 *
 * Return: address of new element else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
