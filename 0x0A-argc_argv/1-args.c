#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argv: the offset value
 * @argc: count of the offset
 * Return: always 0
 */

int main(int argc, char **argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
