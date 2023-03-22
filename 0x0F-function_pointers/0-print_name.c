#include <stddef.h>
/**
 * print_name - prints name
 * @name: name to be printed
 *
 * @f: pointer to func
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
