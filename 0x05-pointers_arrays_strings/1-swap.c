#include "main.h"

/**
 * swap_int - swaps values
 * @a: value one
 * @b: value two
 * @temp: holds temporary value
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
