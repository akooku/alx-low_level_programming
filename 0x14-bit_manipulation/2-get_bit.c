#include "main.h"

/**
 * get_bit - a function that returns the value of  a bit at a given index
 *
 * @n: decimal value
 * @index: index position
 *
 * Return: the value of the bit at index index, -1 otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > MAX_SIZE)
		return (-1);

	return ((n >> index) & 1);
}
