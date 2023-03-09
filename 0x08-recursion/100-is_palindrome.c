#include "main.h"

/**
 * is_palindrome - entry point
 * description: print palindrome
 * @s: param -> number
 * Return: 1 if is palindrome else 0
 */

int palindrome(char *s)
{
	if (*s != '\0')
	{
		if (*s == compare(s))
		{
			s += 1;
			return (is_palindrome(s));
		}
		else
			return (0)
	}
	else
		return (1);
}

/**
 * compare - entry print
 * @s: param -> string
 * Return: number -> integer
 */

char compare(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	compare(s);
	s--;
	return (*s);
}
