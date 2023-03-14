#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _putchar - entrey point
 * @c: param -> char to print
 * return: 1 if success and -1 if error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
