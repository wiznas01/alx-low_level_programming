#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a given position
 * @head: pointer to a pointer to the head of list
 * @index: index of the node to be deleted, starting 0
 * Return: 1 is success, -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (-1);
	}

	temp = *head;
	prev = NULL;
	while (temp != NULL && i < index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);
	return (-1);
}
