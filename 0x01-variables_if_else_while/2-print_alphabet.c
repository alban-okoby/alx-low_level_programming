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
	int myStr;

	for (myStr = 97; myStr < 123; myStr++)
	{
	putchar(myStr);
	}
	for (myStr = 65; myStr <= 90; myStr++)
	{
	putchar(myStr);
	}
	putchar(10);
	return (0);
}
