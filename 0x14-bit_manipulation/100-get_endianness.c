#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int endian_type = 1;
	char *ptr = (char *)&endian_type;

	if (*ptr)
		return (1);
	else
		return (0);
}
