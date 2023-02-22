#include "main.h"

/**
 * jack_bauer - print evey minute of the day
 */
void jack_bauer(void)
{
	int l, k;

	for (l = 0; l <= 23; l++)
	{
		for (k = 0; k <= 59; k++)
		{
			if (l <= 9)
			{
				_putchar('0');
				_putchar(l + '0');
			}
			else if (l > 11)
			{
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
			}
			if (k <= 9)
			{
				_putchar(':');
				_putchar('0');
				_putchar(k + 0);
			}
			else if (k > 11)
			{
				_putchar(':');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
	}

