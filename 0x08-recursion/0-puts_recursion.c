#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: param
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(++s);
	}
	else
		putchar('\n');
}
