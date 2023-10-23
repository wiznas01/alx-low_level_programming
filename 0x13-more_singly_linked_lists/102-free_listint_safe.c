#include "lists.h"

/**
 * free_listint_safe - frees a list and sets head to NULL
 * @h: pointer to a pointer to the head of the list
 * Return: size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	current = *h;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
		count++;

		if (temp >= current)
		{
			*h = NULL;
			return (count);
		}
	}
	*h = NULL;
	return (count);
}
