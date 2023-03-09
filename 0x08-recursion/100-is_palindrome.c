#include "main.h"

/**
 * check_palidrome - checks if palidrome
 *
 * @s: string
 * @start: start of string
 * @end: end of string
 *
 * Return: 1 if palidrome, 0 otherwise
 */

int check_palidrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (check_palidrome(s, start + 1, end - 1));
}

/**
 * is_palidrome - checks if palidrome
 *
 * @s: string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palidrome(char *s)
{
	int len = strlen(s);

	return (check_palidrome(s, 0, len - 1));
}
