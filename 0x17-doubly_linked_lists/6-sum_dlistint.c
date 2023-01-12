#include "lists.h"

/**
 * sum_dlistint - sum of all the nodes
 * @head: doubly linked list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int con;

	if (!head)
		return (0);
	while (head)
	{
		con += head->n;
		head = head->next;
	}

	return (con);
}
