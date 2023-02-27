#include "main.h"

/**
 * swap_int - swaps values
 * @a: value one
 * @b: value two
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
