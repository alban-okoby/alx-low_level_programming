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
	int i, l = 0;

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[l] = src[i];
		++l;
	}
	dest[b] = '\0';

	return (dest);
}
