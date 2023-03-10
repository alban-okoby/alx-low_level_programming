#include <stdio.h>

/**
 * main - entry point
 * @argv: the offset value
 * @argc: count of the offset
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
