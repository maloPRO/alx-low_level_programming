#include <stddef.h>
/**
 * int_index - seraches for integer in an array
 * @array: The array of integers
 * @size: size of array
 * @cmp: the function
 * Return: -1 for no match, 1 for match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
		}
	}
	return (-1);
}
