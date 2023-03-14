#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a new concatenated string on success,
 * NULL on failure, empty string if NULL is passed
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0;
	unsigned int len2;
	unsigned int i;
	char *comb;

	if (s1 == NULL)
		_putchar(' ');

	if (s2 == NULL)
		_putchar(' ');

	while (s1[len1])
	{
		len++;
	}

	len2 = len1;

	while (s2[len2])
	{
		len2++
	}

	comb = (char *) malloc(sizeof(char) * (len2 + 1));

	for (i = 0; i < len1; i++)
	{
		comb[i] = s1[i];
	}

	for (i = len1; i < len2; i++)
	{
		comb[i] = s2[i];
	}

	if (comb == NULL)
		return (NULL);

	return (comb);
}
