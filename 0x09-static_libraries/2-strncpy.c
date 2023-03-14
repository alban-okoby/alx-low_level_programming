#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - entry point
 * @dest: param -> string
 * @src: param -> string
 * @n: param -> number
 * Return: result
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

