#include "main.h"

/**
 * *_strcmp - Entry point
 * Description: - This function print ..
 * @s1: param
 * @s2: param
 * Return: 0 if s1 == s2;
 */

int _strcmp(char *s1, char *s2)
{
	int nbre1 = 0;
	int nbre2 = 0;

	while (*(dest + nbre1) != '\0')
		nbre1++;
	while (nbre2 == 0)
	{
		if ((*(s1 + nbre1) == '\0') && (*(s2 + nbre1) == '\0'))
			break;
		nbre2 = *(s1 + nbre1) - *(s2 + nbre1);
		nbre1++;
	}
	return (nbre2);
}
