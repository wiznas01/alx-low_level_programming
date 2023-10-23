#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to a pointer to the head of the list
 * Return: pointer to the fist node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL;

	if (current == NULL)
		return (NULL);

	if (current->next == NULL)
		return (current);

	*head = current->next;
	prev = reverse_listint(head);
	current->next->next = current;
	current->next = NULL;

	return (prev);
}
