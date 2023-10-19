#include "lists.h"
/**
 * list_len - function to print length of list
 * @h: pointer to head
 * Return: number of element in a list
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
