#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @separator: string
 * @n: number
 * @...: A variable number of strings
 * Description: print string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list chaine;
	char *chaine1;
	unsigned int i;

	va_start(chaine, n);

	for (i = 0; i < n; i++)
	{
		chaine1 = va_arg(chaine, char *);

		if (chaine1 == NULL)
			printf("(nil)");
		else
			printf("%s", chaine1);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(chaine);
}
