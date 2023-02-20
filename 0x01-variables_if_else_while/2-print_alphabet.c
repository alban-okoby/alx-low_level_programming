#include <stdio.h>
/**
 * main : Entry point
 * Description: of this program
 * Return : always 0
 */
int main(void)
{
int myStr;
	for (myStr = 97; myStr <= 122; myStr++)
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
