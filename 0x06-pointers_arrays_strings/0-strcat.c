#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (*dest);
}
