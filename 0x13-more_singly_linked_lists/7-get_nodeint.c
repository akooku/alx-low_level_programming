#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t list
 *
 * @head: head node
 * @index: position of node
 *
 * Return: the nth of a listint_t linked list, NULL otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = head;

	while (ptr != NULL)
	{
		if (count == index)
		{
			return (ptr);
		}

		ptr = ptr->next;
		count++;
	}

	return (NULL);
}
