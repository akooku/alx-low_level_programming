#include "function_pointers.h"
#include <stdlib.h>

/**
 * array-iterator - executes a function given as a parameter on each
 * element of an array
 *
 * @array: array
 * @size: size of the array
 * @action: a pointer to the function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
