#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: character
 *
 * Return: 1 is success, 0 if failure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
