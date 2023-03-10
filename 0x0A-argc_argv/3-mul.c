#include <stdio.h>
#include<stlib.h>

/**
 * main - entry point
 * @argv: the offset value
 * @argc: count of the offset
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int k, result;

	if (argc != 3)
	{
		printf("Error\n")
		return (1);
	}
	for (k = 0; k <= argc; k++)
		result = atoi(argv[i]);
	printf("%d\n", result);
	return (0);
}
