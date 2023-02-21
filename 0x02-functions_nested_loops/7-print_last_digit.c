#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @d: digit
 *
 * Return: the value of the last digit
 */
int print_last_digit(int d)
{
	int n = (d % 10);

	if (n < 0)
	{
		n = (n * -1);
	}
	_putchar(n + '0');
	return (n);
}