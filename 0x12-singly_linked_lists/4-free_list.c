#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: head node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
