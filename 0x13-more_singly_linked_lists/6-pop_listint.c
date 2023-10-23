#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to a pointer to the head of list
 * Return: data n of the deleted node or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
