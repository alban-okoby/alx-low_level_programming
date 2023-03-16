#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - entry point
 * @b: param -> integer
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *z;

	z = malloc(b);
	if (z == NULL)
		exit(98);
	return (z);
}
