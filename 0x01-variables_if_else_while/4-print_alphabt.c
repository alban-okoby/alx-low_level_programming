#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program that print the alphabet in lowercase'
 *
 * Return: always 0
 */
int main(void)
{
char chaine;
	for (chaine = 'a'; chaine <= 'z'; chaine++)
	{
		if (chaine != 'q' && chaine != 'e')
		{
		putchar(chaine);
		}
	}
	putchar(10);
	return (0);
}
