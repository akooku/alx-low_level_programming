#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_bits_count = 0;
	unsigned long int difference = n ^ m;

	while (difference)
	{
		flip_bits_count += (difference & 1);
		difference >>= 1;
	}

	return (flip_bits_count);
}
