#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'program that print alphabet in lowercase,
 * and then in uppucase, followed by a new line'
 *
 * Return: Always 0
 */
int main(void)
{
	int chaine;

	for (chaine = 97; chaine < 123; chaine++)
	{
		putchar(chaine);
	}
	for (chaine = 65; chaine < 91; chaine++)
	{
		putchar(chaine);
	}
	putchar(10);

	return (0);
}
