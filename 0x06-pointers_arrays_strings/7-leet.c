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
	char str1[] = "aeotl";
	char str2[] = "AEOTL";
	char str3[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if (str1[i] == str1[j] || str[i] == str2[j])
			{
				str[i] = str3[j];
				break;
			}

		}
	}
}	return (str);
