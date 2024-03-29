#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: head node
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr = head, *fast_ptr = head;
	size_t count = 0;

	if (head == NULL)
		return (count);
	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
		{
			printf("-> [%p] %d\n", (void *) slow_ptr, slow_ptr->n);
			break;
		}
		printf("[%p] %d\n", (void *) slow_ptr, slow_ptr->n);
		count++;
	}
	if (slow_ptr != fast_ptr)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			count++;
			head = head->next;
		}
	}
	else
	{
		slow_ptr = head;
		while (slow_ptr != fast_ptr)
		{
			printf("[%p] %d\n", (void *) slow_ptr, slow_ptr->n);
			count++;
			slow_ptr = slow_ptr->next;
			fast_ptr = fast_ptr->next;
		}
		printf("-> [%p] %d\n", (void *) slow_ptr, slow_ptr->n);
		count++;
	}
	return (count);
}
