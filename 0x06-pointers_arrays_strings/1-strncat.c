#include "main.h"

/**
 * *_strncat - Entry point
 * Description: - This function print ..
 * @src: param
 * @dest: param
 * @n: param
 * Return: pointer dest value
 */

char *_strncat(char *dest, char *src, int n)
{
	int nbre1 = 0;
	int nbre2 = 0;

	while (*(dest + nbre1) != '\0')
		nbre1++;
	while (nbre2 < n)
	{
		*(dest + nbre1) = *(src + nbre2);
		if (*(src + nbre2) == '\0')
			break;
		nbre2++;
		nbre1++;
	}
	return (dest);
}
