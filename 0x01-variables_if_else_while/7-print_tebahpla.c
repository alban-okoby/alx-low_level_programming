#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print the lowercase alphabet in reverse'
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
