#include "main.h"

/**
 * reverse_array - reverses array
 * @a: array
 * @n: number of elements
 */
void reverse_array(int *a, int *n)
{
	int i;

	for (i = n; i <= 0; i--)
	{
		_putchar(a[i] + '0');
	}
}

