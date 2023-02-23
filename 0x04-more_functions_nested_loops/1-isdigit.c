#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: character
 *
 * Return: 1 if success, 0 if failure
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
