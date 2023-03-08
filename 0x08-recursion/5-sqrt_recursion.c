#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number
 *
 * Return: integer value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int root = _sqrt_recursion(n / 4) * 2;

		if ((root + 1) * (root + 1) > n)
			return (root);
		else
			return (root + 1);
	}
}
