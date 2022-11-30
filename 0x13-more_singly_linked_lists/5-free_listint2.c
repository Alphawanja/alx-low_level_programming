#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *purr;

	if (head != NULL)
	{
		purr = *head;
		while ((tmp = purr) != NULL)
		{
			purr = purr->next;
			free(tmp);
		}
		*head = NULL;
	}
}
