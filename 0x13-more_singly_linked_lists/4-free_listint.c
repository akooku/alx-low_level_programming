#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: head node
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
