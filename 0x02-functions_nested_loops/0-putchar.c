#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'program that print _putchar'
 *
 * Return: Always 0
 */
int main(void)
{
	char tab[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(tab[i]);
	_putchar(10);

return (0);
}
