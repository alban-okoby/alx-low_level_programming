#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program will assign a random number to
 * the variable n each time it is executed. Complete the source
 * code in order to print the last digit of
 * the number stored in the variable'
 *
 * Return: Always 0
 */
int main(void)
{
	int nbre;

	srand(time(0));
	nbre = rand() - RAND_MAX / 2;
	printf("The last digit of %d is %d", nbre, nbre % 10);
	if (5 < (nbre % 10))
		printf("... is greater than 5");
	if ((nbre % 10) == 0)
		printf(" and is 0");
	if ((nbre % 10) < 6 && (nbre % 10) != 0
		printf("... is less than 6 and not 0 \n");

	return (0);
}
