#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print all digit numbers of base 10
 * starting from 0, follow by a new line'
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		++i;
	}
	printf("\n");
	return (0);
}
