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
	if (size == 0)
	{
		return (NULL);
	}

	char *arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	unsigned int i;
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
