#include "main.h"

/**
 * _memset - fill memory
 * @s: space
 * @b: bytes
 * @n: memory area
 * Return: pointer to s string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

