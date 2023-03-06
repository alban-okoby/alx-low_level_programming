#include "main.h"

/**
 * _strspn - gest the length of a prefix substring
 * @s: param
 * @accept: param 2
 * Return: length of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, l, first_length, second_length;

	first_length = 0;
	second_length = 0;

	while (accept[first_length] != '\0')
		first_length++;
	for (k = 0; s[k] != '\0'; k++)
		for (l = 0; l < first_length; l++)
			if (s[k] == accept[l])
				second_length++, l = first_length;
			else
				if (l == first_length - 1)
					goto exit;
exit: return (second_length);
}
