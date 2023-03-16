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
		exit(98);
	}

	return (all);
}
