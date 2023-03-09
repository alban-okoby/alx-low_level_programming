#include "main.h"

/**
 * first - entry point
 * @a: string
 * @l: number -> integer
 * Return: ✔
 */

int first(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (first(a + 1, l + 1));
}


/**
 * second - entry point
 * @a: string
 * @l: number -> integer
 * Return: ✔
 */

int second(char *a, int l)
{
	if (*a != *(a + 1))
		return (0);
	else if (*a == 0)
		return (1);
	return (second(a + 1, l - 2));
}

/**
 * is_palindrome - entry point
 * description: print palindrome
 * @s: param -> number
 * Return: 1 if is palindrome else 0
 */

int is_palindrome(char *s)
{
	int l;

	l = first(s, 0);
	return (second(s, l));
}
