#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates arrays of chars, and intializes it
 * @size: size of array
 * @c: char to be assigned
 * Description: creates arrays of chars, and intializes it
 * Return: pointer to array, null if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)

		str[i] = c;

	return (str);
}
