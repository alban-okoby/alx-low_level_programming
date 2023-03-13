#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
*strtow - Prototype that return a pointer to an array
of string (words)
*@str: parameter -> string
*Return: NULL if str == NULL or str == ""
*/
int count_word(char *s)
{
	int result, c, x;

	result = 0;
	x = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			result = 0;
		else if (result == 0)
		{
			result = 1;
			x++;
		}
	}

	return (x);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: return pointer to the array of strings
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
