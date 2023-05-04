#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int
 *
 * @b: pointing to a string of 0 and 1 char
 *
 * Return: the converted number, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_number = 0;
	unsigned int uint;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		uint = *b - '0';
		decimal_number = decimal_number * 2 + uint;
		b++;
	}

	return (decimal_number);
}
