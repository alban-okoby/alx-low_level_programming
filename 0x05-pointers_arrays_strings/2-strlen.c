#include "main.h"

/**
 * _strlen - Entry point
 * @s: params
 * Return: return length of variable
 */

int _strlen(char *s)
{
	int k;

	for (k = 0; *s != '\0'; ++s)
	{
		++k;
	}
	return (k);
}
