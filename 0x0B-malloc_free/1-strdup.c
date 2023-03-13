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
	char *newstr = (char *)malloc(sizeof(str));

	if (str == NULL)
	{
		return (NULL);
	}

	if (newstr == NULL)
	{
		return (NULL);
	}

	newstr[] = str;
	return (newstr);
}
