#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: head node
 *
 * Return: the sum of all the data (n) of a listint_t linked list, 0 otherwise
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);

	ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
