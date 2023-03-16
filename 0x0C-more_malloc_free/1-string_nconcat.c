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

	if (s1 != NULL)
		while (s1[len1])
		{
			len1++;
		}
	if (s2 != NULL)
	{
		while (s2[len2])
		{
			len2++;
		}
		if (n >= len2)
			n = len2;
	}

	newstr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (newstr == NULL)
	{
		free(newstr);
		return (NULL);
	}
	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
		{
			newstr[i] = s1[i];
		}
	if (s2 != NULL)
		for (j = 0; s2[j] != '\0'; j++)
		{
			newstr[i + j] = s2[j];
		}

	newstr[i + j] = '\0';
	return (newstr);
}
