#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count
 * @argv: vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, bytesNumber;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytesNumber = atoi(argv[1]);

	if (bytesNumber < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytesNumber; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != bytesNumber - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}

