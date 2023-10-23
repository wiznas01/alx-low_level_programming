#include "lists.h"

/**
 * add_nodeint - add new node at the beginning of list
 * @head: pointer to the head of list
 * @n: integer value to be stored in new node
 * Return: address to new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodenew;

	nodenew = malloc(sizeof(listint_t));
	if (nodenew == NULL)
		return (NULL);

	nodenew->n = n;
	nodenew->next = *head;
	*head = nodenew;

	return (nodenew);
}
