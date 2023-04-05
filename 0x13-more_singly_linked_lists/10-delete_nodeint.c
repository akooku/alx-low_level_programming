#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 *
 * @head: head node
 * @index: index of the node that should be deleted
 *
 * Return: 1 on success, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous_node, *current_node;

	if (head == NULL || *head == NULL)
		return (-1);

	previous_node = *head;
	current_node = *head;

	if (index == 0)
	{
		*head = current_node->next;
		current_node->next = NULL;
		free(current_node);
		return (1);
	}

	while (index != 0)
	{
		previous_node = current_node;
		current_node = current_node->next;
		index--;
	}

	previous_node->next = current_node->next;
	current_node->next = NULL;
	free(current_node);
	return (1);
}
