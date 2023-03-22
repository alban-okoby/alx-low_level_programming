#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a given function
 *
 * @array: -> array to iterate
 * @size: -> size of array
 * @action: -> pointer to function to call
 *
 * Return: @empty if @array and @action is NULL
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
