#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: head node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	temp = *head;

	while (temp != NULL)
	{
		ptr = temp;
		temp = temp->next;
		free(ptr);
	}

	*head = NULL;
}
