#include "lists.h"
/**
 * add_node - function to add a new node to beginning of list
 * @head: head node
 * @str: string
 * Return: returns address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nodenew;
	unsigned int i, count = 0;

	nodenew = malloc(sizeof(list_t));
	if (nodenew == NULL)
		return (NULL);
	nodenew->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	nodenew->len = count;
	nodenew->next = *head;
	*head = nodenew;

	return (*head);
}
