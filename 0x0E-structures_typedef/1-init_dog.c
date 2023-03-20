#include "dog.h"

/**
 * init_dog - initializes dog
 * @d: pointer to dog adress
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	d = &my_dog;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
