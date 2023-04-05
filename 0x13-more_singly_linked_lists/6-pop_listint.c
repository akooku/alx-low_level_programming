#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: head node
 *
 * Return: the head node's data (n), 0 otherwise
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *del_node;

	if (*head == NULL)
		return (0);

	del_node = *head;
	n = del_node->n;
	*head = (*head)->next;
	del_node->next = NULL;
	free(del_node);
	return (n);
}
