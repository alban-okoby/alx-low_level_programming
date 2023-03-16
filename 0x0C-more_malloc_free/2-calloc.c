#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: param -> The number of elements.
 * @size: param -> The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *nbre;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	nbre = malloc(nmemb * size);

	if (nbre == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		nbre[i] = 0;

	return (nbre);
}
