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
char **strtow(char *str)
{
	int j = 0,f = 0, k = 0, s = 0, u = 0;
	char **tableau;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[j] != '\0')
		{
			if(str[j] == ' ')
			{
				j++;
			}
		}
		tableau = malloc(j * sizeof(char) + 1);
		if (tableau == NULL)
		{
			return (NULL);
		}
		for (f = 0; f <= j; j++)
		{
			u = s;
			while (str[s] != ' ')
                	{       
                        	s++;
                	}
			tableau[f] = malloc((s + 1) * sizeof(char));
			if (tableau[f] == NULL)
			{
				return (NULL);
			}
			for (k = 0; k <= s; k++)
			{
				tableau[f][k] = str[u + k];
			}
			tableau[f][k +1] = '\0';
			s++;
		}
		tableau[f + 1][1] = '\0';
		return (tableau);
	}
}
