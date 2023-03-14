#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a new string which is a
 * duplicate of the string str
 *
 * @str: string
 *
 * Return: NULL if str is NULL, a pointer to the duplicated
 * string on success, NULL if insufficient memory
 */

char *_strdup(char *str)
{
	signed int i = 0;
	signed int len = 0;
	char *newstr = (char *)malloc(sizeof(char) * (len * 1));

	if (str == NULL)
	{
		return (NULL);
	}

	if (newstr == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		newstr[i] = str[i];
	}

	newstr[len] = '\0';
	return (newstr);
}
