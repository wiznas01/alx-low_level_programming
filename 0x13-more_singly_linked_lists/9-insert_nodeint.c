#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: pointer to a pointer to the head of list
 * @idx: index where node should be added starting from 0
 * @n: integer value to be stored in the new node
 * Return: address of new node, NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nodenew, *temp;
	unsigned int i = 0;

	nodenew = malloc(sizeof(listint_t));
	if (nodenew == NULL)
		return (NULL);

	nodenew->n = n;

	if (idx == 0)
	{
		nodenew->next = *head;
		*head = nodenew;
		return (nodenew);
	}

	temp = *head;
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		free(nodenew);
		return (NULL);
	}

	nodenew->next = temp->next;
	temp->next = nodenew;

	return (nodenew);
}
