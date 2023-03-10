#include <stdio.h>

/**
 * main - entry point
 * @argv: the offset value
 * @argc: count of the offset
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
		printf("%s\n", argv[k]);
	return (0);
}
