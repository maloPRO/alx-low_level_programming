#include "main.h"

/**
 * _isupper - checks uppercase
 * Return: 1 if uppercase 0 if lowercase
 * @c: letter to be checked
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
