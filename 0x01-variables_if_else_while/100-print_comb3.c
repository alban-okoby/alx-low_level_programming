#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'program that prints all possible combinations of
 * two two-digit numbers'
 *
 * Return: Always 0
 */
int main(void)
{
	int k, l;

	for (k = 48; k < 58; k++)
	{
		for (l = 49; l < 58; l++)
		{
			putchar(k);
			putchar(l);
			if (k != 56 || l != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
