#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc and exits if allocation fails
 * @b: Size of the memory to be allocated
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
