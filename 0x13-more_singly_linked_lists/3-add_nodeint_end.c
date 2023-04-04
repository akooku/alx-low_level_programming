#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: head node
 * @n: new node
 *
 * Return: the adress of the new element, NULL otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *temp;

	end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = end_node;
	return (end_node);
}
