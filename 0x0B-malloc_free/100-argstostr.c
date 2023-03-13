#include "main.h"
#include <stdlib.h>

/**
 * argstostr - this function concatenates arguments
 * @av: param -> vector argument
 * @ac: param -> count argument
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *chaine;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	chaine = malloc((c + 1) * sizeof(char));

	if (chaine == NULL)
	{
		free(chaine);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			chaine[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			chaine[ia] = av[i][j];
	}
	chaine[ia] = '\0';

	return (chaine);
}
