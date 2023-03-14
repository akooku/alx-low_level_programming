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
	signed int i;
	signed int len = 0;
	char *newstr = (char *)malloc(sizeof(str));

	if (str == NULL)
	{
		return (NULL);
	}

	if (newstr == NULL)
	{
		free(newstr);
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

	return (newstr);
}
