#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - Entry point
 * Description: - This function print ..
 * @dest: param 1
 * @src: param 2
 * Return: Always dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, l;

	l = strlen(src);

	for (i = 0; i <= l; i++)
		dest[i] = src[i];
	return (dest);
}
