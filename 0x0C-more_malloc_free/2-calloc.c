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
	void *nbre;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	nbre = malloc(size * nbre);

	if (nbre == NULL)
		return (NULL);

	filler = nbre;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (nbre);
}
