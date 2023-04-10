#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 *
 * @c: the character to write
 *
 * Return: On success, returns the number of characters
 * written, otherwise -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_binary - Entry ppoint
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	if (n >= 2)
		print_binary(1 << n);
	_putchar((n & 1) + '0');
}
