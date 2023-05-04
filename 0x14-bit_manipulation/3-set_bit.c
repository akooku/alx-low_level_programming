#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 *
 * @n: pointer to an int
 * @index: index posiition
 *
 * Return: 1 on success, 0 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	*n = *n | (mask << index);
	return (1);
}
