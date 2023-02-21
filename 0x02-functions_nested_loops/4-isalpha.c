#include "main.h"

/**
 * _isalpha - Print the alphabet, in lowercase
 * Description: Print the alphabet in lowercase
 * @c: integer
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c < 123 && c > 98) || (c < 91 && c > 66))
		return (1);
	return (0);
}
