#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - The allocated memory
 * @b: param -> integer
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *chaine;
	chaine = malloc(b);

	if (chaine == NULL)
		exit(98);

	return (chaine);
}
