#include "function_pointers.h"

/**
 * print_name - this function print a name
 * @name: name
 * @f: pointer
 * Return: always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
