/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of bytes from src to append.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *pjr = dest;

	while (*pjr)
		pjr++;

	while (*src && n > 0)
	{
		*pjr = *src;
		pjr++;
		src++;
		n--;
	}

	*pjr = '\0';

	return (dest);
}
