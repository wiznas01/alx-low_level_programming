#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of list
 * @head: pointer to the head of list
 * @index: index of the node, starting 0
 * Return: pointer to the nth node, NULL if node dont exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
