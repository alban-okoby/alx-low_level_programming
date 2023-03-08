#include "main.h"

/**
 * _strlen_recursion - entry point
 * @s: param string
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		result = _strlen_recursion(++s);
		return (++result);
	}
	return (0)
}
