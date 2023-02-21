#include <stdio.h>
/**
 * main: Entry point
 *
 * Description: 'This program prints the alphabet in lowercase,
 * followed by a new line
 *
 * Return: always 0
 */
int main(void)
{
	char myStr = 'a';

	while (myStr <= 'z')
	{
		putchar(myStr);
		++myStr;
	}

	putchar('\n');
	return (0);
}
