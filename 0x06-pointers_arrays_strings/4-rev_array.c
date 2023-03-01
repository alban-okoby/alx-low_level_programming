#include "main.h"

/**
 * reverse_array - Entry point
 * Description: - This function print ..
 * @a: param
 * @n: param
 */

void reverse_array(int *a, int n)
{
	int i, j, result;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			result = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (b - 1)) = result;
		}
	}
}
