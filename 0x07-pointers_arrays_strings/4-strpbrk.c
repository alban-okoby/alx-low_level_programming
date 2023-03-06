#include "main.h"

/**
 * _strpbrk - searches a string
 * @s: param 1
 * @accept: matches
 * Return: pointer to thr byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int k, l;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (l = 0; accept[l]; != '\0'; l++)
			if (s[k] == accept[l])
				goto exit;
	}
exit: return (s[k] != '\0' ? s + k : '\0');
}

