#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - Checks if a character is a digit.
 * @c: Character to check
 * Return: 1 if it's a digit, 0 otherwise.
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * str_to_int - Converts a string to an integer.
 * @str: Input string
 * Return: Converted integer
 */
int str_to_int(const char *str)
{
	int num = 0;
	while (*str)
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num);
}

/**
 * multiply - Multiplies two positive numbers and prints the result.
 * @num1: First number as string
 * @num2: Second number as string
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j;
	int *result;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	result = malloc(sizeof(int) * (len1 + len2));
	if (result == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
		}
	}

	for (i = len1 + len2 - 1; i > 0; i--)
	{
		result[i - 1] += result[i] / 10;
		result[i] %= 10;
	}

	for (i = (result[0] == 0) ? 1 : 0; i < len1 + len2; i++)
		_putchar(result[i] + '0');
	_putchar('\n');

	free(result);
}

int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(*argv[1]) || !is_digit(*argv[2]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}
