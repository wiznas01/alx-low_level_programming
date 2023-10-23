#include "lists.h"

/**
 * free_listint - free a list
 * @head: pointer to the head of new list
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
