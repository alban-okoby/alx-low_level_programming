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
	int nbre1 = 0;
	int nbre2 = 0;

	while (dest[a] != '\0')
		nbre1++;
	while (src[nbre2] != '\0')
	{
		dest[nbre1] = src[nbre2];
		nbre2++;
		nbre1++;
	}

	dest[nbre1] = '\0';
	return (dest);
}
