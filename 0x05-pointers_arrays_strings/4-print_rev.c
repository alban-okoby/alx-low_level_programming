#include "main.h"

/**
 * print_rev - Entry point
 * Description: - This function print reverse string
 * @s: param
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		putchar(s[i]);
	putchar('\n');
}
