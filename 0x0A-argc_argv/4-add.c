#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - entry point
 * @argv: the offset value
 * @argc: count of the offset
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	unsigned int k, result, nbre;

	result = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (k = 0; argv[argc][k] != '\0', k++)
		{
			if (!(isdigit(argv[argc][k])))
			{
				print("Error\n");
				return (1);
			}
		}
		result = atoi(argv[argc]);
		result += result;
	}
	print("%d\n", result);
	return (result);
}
