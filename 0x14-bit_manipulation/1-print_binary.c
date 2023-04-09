#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_binary - Entry ppoint
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	if ( 2 <= n)
		print_binary( 1 << n);
	_putchar('0' + (1 & n));
}
