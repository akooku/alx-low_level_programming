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

	if (head != NULL && *head != NULL)
	{
		temp = *head;

		while (temp != NULL)
		{
			ptr = temp;
			temp = temp->next;
			ptr->next = NULL;
			free(ptr);
		}

		*head = NULL;
	}
}
