#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number
 *
 * Return: Either 1, 0, or -1 depending on the value
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
	return (1);
	if (n == 0)
		_putchar('0');
	return (0);
	if (n < 0)
		_putchar('-');
	return (-1);
}