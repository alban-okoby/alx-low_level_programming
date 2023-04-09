#include "main.h"
#include <unistd.h>

/**
 * print_binary - Entry ppoint
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	if (n >= 2)
		print_binary(1 << n);
	_putchar('0' + (1 & n));
}
