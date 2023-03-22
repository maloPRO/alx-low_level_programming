#include <stddef.h>
/**
 * array_iterator - executes function on elements of an array
 * @size: size of the array
 * @action: pointer to function
 * @array: array of elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
