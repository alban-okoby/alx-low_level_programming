#include "main.h"

/**
 * wildcmp - entry point
 * description: this function compares two
 * strings
 * @s1: string -> to compare
 * @s2: string -> with wild caracter
 * Return: always ✔
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wilcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
	{
		if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	return (0);
}
