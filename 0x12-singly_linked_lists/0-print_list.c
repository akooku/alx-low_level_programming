#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: head node
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);

		count++;
		ptr = ptr->next;
	}

	return (count);
}
