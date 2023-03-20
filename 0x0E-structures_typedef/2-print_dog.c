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
	if (d == NULL)
	{
		printf("nil\n");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
