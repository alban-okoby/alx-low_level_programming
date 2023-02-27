#include "main.h"
#include <string.h>

/**
 * rev_string - Entry point
 * Description: - This function print reverse string
 * @s: param
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i = 0, l;

	char result;

	l = strlen(s);

	while (i < (l / 2))
	{
		result = s[i];
		s[i] = s[l - (i + 1)];
		s[l - (i + 1)] = result;

		i++;
	}
}
