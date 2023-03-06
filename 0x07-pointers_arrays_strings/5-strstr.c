#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: the first occurence finded
 * Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int k, l, m;

	if (needle[0] == '\0')
		return (haystack);
	while (haystack[k])
	{
		if (haystack[k] == needle[0])
		{
			m = k;
			l = 0;
			while (needle[l] != '\0')
			{
				if (haystack[m] == needle[l])
					k++;
					l++;
				else
					break;
			}
			if (needle[l] == '\0' || haystack[k] == '\0')
				return (haystack + k);
		}
		k++;
	}
	return ('\0');
}

