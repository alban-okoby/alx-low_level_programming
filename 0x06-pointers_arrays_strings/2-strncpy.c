#include "main.h"

/**
 * *_strncpy - Entry point
 * Description: - This function print ..
 * @src: param
 * @dest: param
 * @n: param
 * Return: pointer dest value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
