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
	unsigned int len2 = 0;
	unsigned int i;
	unsigned int j;
	char *comb;

	if (s1 != NULL)
		while (s1[len1])
		{
			len1++;
		}

	if (s2 != NULL)
		while (s2[len2])
		{
			len2++;
		}

	comb = (char *) malloc(sizeof(char) * (len1 + len2 + 1));

	if (comb == NULL)
		return (NULL);

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
		{
			comb[i] = s1[i];
		}

	if (s2 != NULL)
		for (j = 0; s2[j] != '\0'; j++)
		{
			comb[len1 + j] = s2[j];
		}

	comb[len1 + len2] = '\0';
	return (comb);
}
