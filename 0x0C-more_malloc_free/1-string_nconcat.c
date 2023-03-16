#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: pointer on success, NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;
	int len1 = 0;
	int len2 = 0;
	char *newstr;

	if (s1 == NULL)
		_putchar(' ');
	if (s2 == NULL)
		_putchar(' ');

	while (s1[len1])
	{
		len1++;
	}

	while (s2[len2])
	{
		len2++;
	}

	if (n >= len2)
		n = len2;

	newstr = malloc(sizeof(char) * (len1 + n + 1));
	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		newstr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		newstr[i + j] = s2[j];
	}

	newstr[i + j] = '\0';
	return (newstr);
}
