#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: head node
 * @idx: index of the list where the new node should be added
 * @n: new node
 *
 * Return: the address of the new node, NULL otherwise
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new_node;

	if (head == NULL)
		return (NULL);

	ptr = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (idx != 1 && ptr != NULL)
	{
		ptr = ptr->next;
		idx--;
	}

	if (ptr == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
