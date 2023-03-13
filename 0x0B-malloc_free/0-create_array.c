#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes
 * it with a specific char
 *
 * @size: unsigned integer
 * @c: specific character
 *
 * Return: NULL if size is 0, a pointer to the array,
 * NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
