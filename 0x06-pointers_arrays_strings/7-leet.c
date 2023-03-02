#include "main.h"

/**
 * leet - entry point of function
 * description: This function that ..
 * @str: param
 * Return: 0
 */

char *leet(char *str)
{
	int i, j;
	char a[] = "aeotl";
	char b[] = "AEOTL";
	char c[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if (str[i] == a[j] || str[i] == b[j])
			{
				str[i] = c[j];
				break;
			}

		}
	}
}	return (str);
