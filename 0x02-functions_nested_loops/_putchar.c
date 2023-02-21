#include<unistd.h>

/**
 * that _putchar
 * @c: caracter to print
 * Return: 1 when success
 * -1 : On error
 */
 int _putchar(char c)
{
	return (write(1, &c, 1));
}
