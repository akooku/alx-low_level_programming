#include "main.h"
#include <stlib.h>

/**
 * *create_array - creates an array of chars, and initializes
 * it with a specific char
 *
 * @size: unsigned integer
 * @char: specific character
 *
 * Return: NULL if size is 0, a pointer to the array,
 * NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	*c = (char *)malloc(sizeof(c) * size);

	if (size == 0)
		return (NULL);
	if (size == NULL)
		return (NULL);
	return (*c);
}
