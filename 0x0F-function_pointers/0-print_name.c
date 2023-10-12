#include "function_pointers.h"

/**
 * print_name - prints a name using a specified printing function
 * @name: the name to be printed
 * @f: the function pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
