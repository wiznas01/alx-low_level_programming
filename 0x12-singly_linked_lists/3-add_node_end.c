#include "lists.h"
/**
 * add_node_end -function to add a new node at the end of a list
 * @head: head node
 * @str: string
 * Return: returns addres of new  element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nodenew, *tmp;
	unsigned int i, count = 0;

	nodenew = malloc(sizeof(list_t));
	while (nodenew == NULL)
		return (NULL);
	nodenew->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	nodenew->len = count;
	nodenew->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head =  nodenew;
	else
	{
		while (tmp != NULL)
			tmp = tmp->next;
		tmp->next = nodenew;
	}
	return (*head);

}
