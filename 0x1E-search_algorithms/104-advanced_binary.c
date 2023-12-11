#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary_recursive - Searches for the first occurrence of a value
 * in a sorted array using recursion
 * @array: Pointer to the first element of the array to search in
 * @left: left
 * @right: right
 * @value: Value to search for
 *
 * Return: The index where the first occurrence of the value is
 * located, or -1 if not found or array is NULL
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	if (left <= right)
	{
		size_t mid = left + (right - left) / 2;
		size_t i = 0;

		printf("Searching in array: ");
		for (i = left; i <= right; ++i)
			printf("%d%s", array[i], (i < right) ? ", " : "\n");

		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
				return (mid);
			else
				return (advanced_binary_recursive(array, left, mid, value));
		}
		else if (array[mid] < value)
		{
			return (advanced_binary_recursive(array, mid + 1, right, value));
		}
		else
		{
			return (advanced_binary_recursive(array, left, mid - 1, value));
		}
	}

	return (-1);
}

/**
 * advanced_binary - The advanced binary
 * @array: Pointer
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Preview function
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
