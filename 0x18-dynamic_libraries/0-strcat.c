#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *pjr = dest;

	while (*pjr)
		pjr++;

	while (*src)
	{
		*pjr = *src;
		pjr++;
		src++;
	}

	*pjr = '\0';

	return (dest);
}
