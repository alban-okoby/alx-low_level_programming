#include "main.h"

/**
 * _memcpy - this is input function
 * @src: pointer
 * @n: number of bytes
 * @dest: pointer to string address
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	for (a = 0; a < n; a++)
	{
		*(dest + a) = *(src + a);
	}
	return (dest);
}

