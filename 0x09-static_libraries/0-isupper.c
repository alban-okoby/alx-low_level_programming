#include "main.h"

/**
 * _isupper - entry point
 * @c: param
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c);
	else
		return (0);
}
