#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: head node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	if (h != NULL)
	{
		ptr = h;
		while (ptr != NULL)
		{
			printf("%d\n", ptr->n);
			count++;
			ptr = ptr->next;
		}
	}
	return (count);
}
