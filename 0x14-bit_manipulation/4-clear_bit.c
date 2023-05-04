#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 *
 * @n: pointer to an integer
 * @index: index position
 *
 * Return: 1 on success, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (index > MAX_SIZE)
		return (-1);

	*n = *n & ~(mask << index);
	return (1);
}
