#include <stdio.h>
#include <string.h>

/**
 * print_array - prints array elements
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
	}
	putchar('\n');
}
