#include "main.h"

/**
 * *_strncat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*dest)
	{
		dest++;
	}

	while (*src && i < n)
	{
		*dest++ = *src++;
		i++;
	}

	*dest = '\0';

	return (ptr);
}
