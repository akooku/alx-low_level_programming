#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: integer value
 * @index: index
 *
 * Return: the value of the bit at index index, -1 otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8 || (int) index < 0)
		return (-1);

	return ((n >> index) & 1);
}
