#include "main.h"

/**
 * _strlen - Entry point
 * @s: params
 * Return: return length of variable
 */

int _strlen(char *s)
{
	int k = 0;
	char l;

	while (l != '\0')
	{
		l = *(s + k);
		k++;
	}
	return (k = 1);
}
