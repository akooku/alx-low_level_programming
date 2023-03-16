#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: integer
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *all = malloc(sizeof(*all) * b);

	if (all == NULL)
	{
		_putchar(98);
		exit(1);
	}

	return (all);
}
