#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * crackme - Entry point
 * description: This function generates random valid passwords for
 * the program 101.crackme
 * Return: Always 0
 */

void crackme(void)
{
	int i, n, result;
	int tab[100];

	result = 0;

	srand(time(NULL));

	for (i = 0; i <= 99; i++)
	{
		tab[i] = rand() % 78;
		result += (tab[i] + '0');
		putchar(tab[i] + '0');

		if ((2772 - result) - '0' < 78)
		{
			n = 2772 - result - '0';
			result += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
