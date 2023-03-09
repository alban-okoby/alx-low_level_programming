#include "main.h"

/**
 * is_palindrome - entry point
 * description: print palindrome
 * @s: param -> number
 * Return: 1 if is palindrome else 0
 */

int is_palindrome(char *s)
{
	int i;
	int taille = strlen(s);

	for (i = 0; i < taille / 2; i++)
	{
		if (s[i] != s[taille -  i - 1])
			return (0);
	}
	return (1);
}
