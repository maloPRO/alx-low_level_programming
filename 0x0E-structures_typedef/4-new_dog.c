#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t  *new_doggo;

	new_doggo = malloc(sizeof(dog_t));

	new_doggo->name = name;
	new_doggo->age = age;
	new_doggo->owner = owner;

	return (new_doggo);
}
