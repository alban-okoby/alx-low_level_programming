#include "main.h"

/**
 * _strchr - find a character in a stringfill memory
 * @s: the string input
 * @c: the character to find
 * Return: pointer to 0
 */

char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			break;
	}
	return (s[a] == c ? (s + y) : '\0');
}

