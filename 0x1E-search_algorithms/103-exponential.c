#include <stdio.h>
#include "search_algos.h"
/**
 * exponential_search - Searches for a value in a sorted
 * array using Exponential search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located,
 * or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t low = bound / 2;
	size_t high = (bound < size - 1) ? bound : size - 1;

	if (array == NULL)
		return (-1);

	if (size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	while (low <= high)
	{
		size_t mid = low + (high - low) / 2;
		size_t i = low;

		printf("Searching in array: ");
		for (i = low; i <= high; ++i)
			printf("%d%s", array[i], (i < high) ? ", " : "\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
