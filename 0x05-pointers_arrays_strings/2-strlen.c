#include "main.h"

/**
 * _strlen - Entry point
 * @s: params
 * Return: return length of variable
 */

void _strlen(char *s)
{
	int k = 0;
	char l;

	while (l != '\0')
	{
		l = *(s + k);
		l++;
	}
	return (l = 1);
}
