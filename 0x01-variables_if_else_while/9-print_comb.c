#include <stdio.h>

/**
 * main - ENtry point
 *
 * Description: 'print all possible combinations of single-digit numbers'
 *
 * Return: Always 0
 */
int main(void)
{
int k;
	for (k = 48; k <= 57; k++)
	{
	putchar(k);
		if (k != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
