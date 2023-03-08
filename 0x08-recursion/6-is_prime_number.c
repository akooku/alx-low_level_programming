#include "main.h"

/**
 * is_prime_number_helper - helps me return a prime number
 *
 * @n: number
 * @i: integer
 *
 * Return: 1 is prime number, 0 otherwise
 */

int is_prime_number_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number_helper(n, i - 1));
	}
}

/**
 * is_prime_number - returns a prime number
 *
 * @n: number
 *
 * Return: number
 */

int is_prime_number(int n)
{
	return (is_prime_number_helper(n, n / 2 + 1));
}
