#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return 0
 */

int mai(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return 0;
}
