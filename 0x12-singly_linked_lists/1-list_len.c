#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: head node
 *
 * Return: the number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (h != NULL && ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
