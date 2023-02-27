#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - Entry point
 * Description: - This function print ..
 *@str: param
 * Return: Always 0
 */

void puts2(char *str)
{
	int i, l;

	l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
