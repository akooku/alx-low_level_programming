#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character
 *
 * Return: 1 if success, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
