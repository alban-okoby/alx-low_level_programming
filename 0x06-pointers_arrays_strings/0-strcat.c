#include "main.h"

/**
 * *_strcat - Entry point
 * Description: - This function print ..
 * @src: param
 * @dest: param
 * Return: dest value
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k;
	i = 0; k = 0; j = 0;

	while (dest[i] != '\0')
		j++;
	for (k = 0; k < j; k++)
		*(dest + i + k) = *(src + k);
	*(dest + k + i + 1) = '\0';
	return (dest);
}
