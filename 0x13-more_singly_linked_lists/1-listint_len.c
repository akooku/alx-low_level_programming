#include "lists.h"

/**
 * listint_len - returns the number of lements in a linked listint_t list
 *
 * @h: head node
 *
 * Return: the number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	if (h != NULL)
	{
		ptr = h;
		while (ptr != NULL)
		{
			count++;
			ptr = ptr->next;
		}
	}
	return (count);
}
