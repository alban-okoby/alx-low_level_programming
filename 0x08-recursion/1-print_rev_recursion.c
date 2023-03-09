#include "main.h"

/**
 * _print_rev_recursion - Entry point
 * @s: param
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
