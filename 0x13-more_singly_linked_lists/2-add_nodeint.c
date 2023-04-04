#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: head node
 * @n: new node
 *
 * Return: the adress of the new element, NULL otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node = malloc(sizeof(listint_t));

	first_node->next = *head;

	if (first_node == NULL)
		return (NULL);

	first_node->n = n;
	*head = first_node;

	return (first_node);
}
