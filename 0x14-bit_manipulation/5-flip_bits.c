#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_bits = n ^ m;
	unsigned int count_bits = 0;
	unsigned int mask = 1;

	while (flip_bits)
	{
		if ((flip_bits & mask) == mask)
			count_bits += mask;

		flip_bits = flip_bits >> 1;
	}

	return (count_bits);
}
