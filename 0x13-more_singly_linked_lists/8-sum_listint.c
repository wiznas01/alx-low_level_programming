#include "lists.h"

/**
 * sum_listint - calculates the sum of all data in list
 * @head: pointer to the head of list
 * Return: sum of all data n in the list, 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
