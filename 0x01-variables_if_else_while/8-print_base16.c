#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Print base program
 *
 * Return : Always 0
 */
int main(void)
{
	int nbre = 48;

	while (nbre <= 102)
	{
		putchar(nbre);
		if (nbre == 57)
			nbre += 39;
		++nbre;
	}
	putchar('\n');

	return (0);
}
