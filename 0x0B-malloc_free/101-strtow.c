#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <ctype.h>
/**
  * strtow - count the number of words in the string
  * @str: string
  * Return: pointer
  */
char **strtow(char *str)
{
	int len, num_words, word_len;
	int i, j, k;
	char **words, *word;

	if (str == NULL || *str == '\0')
		return (NULL);
	len = strlen(str);
	num_words = 0;
	for (i = 0; i < len; i++)
	{
		if (!isspace(str[i]) && (i == 0 || isspace(str[i - 1])))
			num_words++;
	}
	words = (char **) malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	word = NULL;
	for (j = 0; j <= len; j++)
	{
		if (!isspace(str[j]) && str[j] != '\0')
		{
			if (word == NULL)
				word = str + j;
		}
		else
		{
			if (word != NULL)
			{
				word_len = &str[j] - word;
				words[i] = malloc(sizeof(char) * (word_len + 1));
				if (words[i] == NULL)
				{
					for (k = 0; k < i; k++)
					{
						free(words[k]);
					}
					free(words);
					return (NULL);
				}
				strncpy(words[i], word, word_len);
				words[i][word_len] = '\0';
				i++;
				word = NULL;
			}
		}
	}
	words[num_words] = NULL;
	return words;
}
