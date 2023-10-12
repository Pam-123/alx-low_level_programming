#include "function_pointers.h"
#include <stddef.h>
#include <unistd.h>

/**
 * _putchar - function to print
 * @c: Variable
 * Return: (write(1, &c, 1))
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_name - prints a name using a specified printing function
 * @name: the name to be printed
 * @f: the function pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

/**
 * print_name_with_newline - prints the name with a newline character
 * @name: the name to be printed
 */
void print_name_with_newline(char *name)
{
	int i = 0;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * print_name_with_spaces - prints the name with spaces between characters
 * @name: the name to be printed
 */
void print_name_with_spaces(char *name)
{
	int i = 0;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		_putchar(' ');
		i++;
	}
	_putchar('\n');
}
