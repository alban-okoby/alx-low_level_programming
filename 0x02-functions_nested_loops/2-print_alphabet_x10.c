#include "main.h"

/**
 *print_alphabet_x10 - Print the alphabet, in lowercase
 *Description: Print the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int k, l;

	for (k = 0; k <= 9; k++)
	{
		for (l = 97; l < 123; l++)
			_putchar(l);
	_putchar(10);
	}
}
