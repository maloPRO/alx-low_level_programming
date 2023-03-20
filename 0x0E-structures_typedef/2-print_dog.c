#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - prints dog
 * @d: dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	char nil[] = "(nil)";

	if (d == NULL)
	{
		printf("%s\n", nil);
	}
	if (d->name == NULL)
	{
		printf("Name: %s\n", nil);
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
