#include "main.h"
#include <stdlib.h>

/**
 * str_concat - entry point
 * @s1: param -> first string
 * @s2: param -> second string
 * Return: always 0
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, j, k, end;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	strout = malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		strout[k] = s1[k];

	end = j;
	for (j = 0; j <= end; k++, j++)
		strout[k] = s2[j];

	return (strout);
}
