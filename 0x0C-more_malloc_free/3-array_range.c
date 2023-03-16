#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of integers
 * @min: integer -> minimum value
 * @max: integer -> maximum value
 * Return: newly created pointer array.
 */

int *array_range(int min, int max)
{
	int *tab;
	int i;

	if (min > max)
		return (NULL);

	tab = malloc(sizeof(*tab) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		tab[i] = min;

	return (tab);
}
