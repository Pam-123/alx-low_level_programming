#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, total_len = 0;
	int k = 0;

	/* Return NULL if ac is 0 or av is NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_len++;
		total_len++; /* For '\n' after each argument */
	}

	/* Allocate memory for the concatenated string */
	concatenated = malloc((total_len + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	/* Copy arguments to the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[k] = av[i][j];
			k++;
		}
		concatenated[k] = '\n'; /* Add newline after each argument */
		k++;
	}

	concatenated[k] = '\0'; /* Null-terminate the concatenated string */

	return (concatenated);
}
