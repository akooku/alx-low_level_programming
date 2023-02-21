#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: number
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
