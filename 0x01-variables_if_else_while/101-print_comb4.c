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
	int j, k, l;

	for (k = 48; k < 58; k++)
	{
		for (l = 49; l < 58; l++)
		{
			for (j = 50; j < 58; i++)
			{
				putchar(k);
				putchar(l);
				putchar(i);
				if (k != 55 || l != 56 || j != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
