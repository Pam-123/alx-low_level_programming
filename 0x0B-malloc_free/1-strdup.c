#include "main.h"

/**
 * _strdup - duplicates a string using malloc
 * @str: input string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	dup_str = malloc((length + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
