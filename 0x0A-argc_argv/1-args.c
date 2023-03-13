#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argv: the offset value
 * @argc: count of the offset
 * Return: always 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0, m;

	while (i < argc)
	{
		m = i;
		i++;
	}
	printf("%d\n", m);
	return (0);
}
