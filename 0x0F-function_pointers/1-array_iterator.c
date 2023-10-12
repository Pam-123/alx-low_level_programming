#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the array of integers
 * @size: Size of the array
 * @action: Pointer to the function to be executed on each element
 *
 * Description:
 * This function iterates through the given array and calls the specified
 * function on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; ++i)
		{
			action(array[i]);
		}
	}
}
