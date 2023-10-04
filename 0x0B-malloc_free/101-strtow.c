#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @str: input string
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * strtow - splits a string into words
 * @str: input string
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count = 0, len, word_start = 0;

	/* Check for invalid input */
	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* Count the number of words in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			word_count++;
	}

	/* Allocate memory for the words array */
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	/* Extract words and store in the words array */
	for (i = 0, k = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			word_start = i;
			len = 0;
			/* Calculate length of the word */
			while (str[i] != ' ' && str[i] != '\0')
			{
				len++;
				i++;
			}

			/* Allocate memory for the word and copy characters */
			words[k] = (char *)malloc((len + 1) * sizeof(char));
			if (words[k] == NULL)
			{
				/* Free previously allocated memory if allocation fails */
				for (j = 0; j < k; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}

			/* Copy characters of the word */
			for (j = 0; j < len; j++)
				words[k][j] = str[word_start + j];
			words[k][j] = '\0'; /* Null-terminate the word */
			k++;
		}
	}

	words[k] = NULL; /* Set the last element of the words array to NULL */
	return (words);
}

