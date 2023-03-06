#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: the first occurence finded
 * Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int k, l;

	if (needle[0] == '\0')
		return (haystack);
	for (k = 0; haystack[k] != '\0'; k++)
	{
		if (haystack[k] == needle[0])
		{
			for (l = 0; needle[l] != '\0'; l++)
			{
				if (haystack[k + l] != needle[l])
					break;
			}
		}
		if (needle[l] == '\0')
			return (haystack + k);
	}
	return ('\0');
}

