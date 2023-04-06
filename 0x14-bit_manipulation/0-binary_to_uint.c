#include <stddef.h>
#include <string.h>

/**
 * binary_to_uint - converts from binary to base 10
 * @b: binary number
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	size_t i;

	if (!b)
		return (0);

	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		bin = (bin << 1) + (b[i] - '0');
	}
	return (bin);
}
