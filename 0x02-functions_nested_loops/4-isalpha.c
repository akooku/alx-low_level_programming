#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character
 *
 * Return: 1 if success, 0 if failurw
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
