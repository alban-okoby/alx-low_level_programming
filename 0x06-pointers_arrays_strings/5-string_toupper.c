#include "main.h"

/**
 * *string_toupper - Entry point
 * Description: - This function print ..
 * @s: param
 * Return: pointer
 * return: pointer to dest
 */

char *string_toupper(char *s)
{
	int result = 0;

	while (*(s + result) != '\0')
	{
		if ((*(s + result) > 98) && (*(s + result) < 123))
		{
			*(s + result) = *(s + result) - 32;
		}
		result++;
	}
	return (s);
}
