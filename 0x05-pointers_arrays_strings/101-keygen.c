#include "main.h"
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * description: This function generates random valid passwords for
 * Return: Always 0
 */

int main(void)
{
	int result;
	char c;

	srand(time(NULL));

	while (result <= 2645)
	{
		c = rand() % 128;
		result += c;
		putchar(c);
	}
	putchar(2772 - result);
	return (0);
}
