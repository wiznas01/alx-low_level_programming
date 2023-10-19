#include "lists.h"
/**
 * add_node_end -function to add a new node at the end of a list
 * @head: head node
 * @str: string
 * Return: returns addres of new  element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nodenew, *temp;
	unsigned int i, count = 0;

	nodenew = malloc(sizeof(list_t));
	if (nodenew == NULL)
		return (NULL);
	nodenew->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	nodenew->len = count;
	nodenew->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head =  nodenew;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nodenew;
	}
	return (*head);

}
