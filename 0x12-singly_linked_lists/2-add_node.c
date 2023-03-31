#include "lists.h"

/**
 * *add_node - adds a new mode at the beginning of a list_t list
 *
 * @head: head node
 * @str: new node
 *
 * Return: the address of the new element, NULL otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
