#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - Entry point
 * Description: - This function print ..
 *@str: param
 * Return: Always 0
 */

void puts_half(char *str)
{
	int i, l;
	int k = 0;

	l = strlen(str);

	if (l % 2 != 0)
		k = k + 1;
	for (i = 0; i < (l + k) / 2; i++)
		putchar(str[i]);
	putchar('\n');
}
