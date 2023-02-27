#include "main.h"
#include <stdio.h>

/**
 * printf_array - Entry point
 * Description: This function ..
 * @a: first param
 * @n: second param
 * Return: Always 0
 */

void printf_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++;)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(",");
	}

