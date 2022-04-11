#include "dog.h"

/**
 * init_dog - Initializes a variable of
 * type struct dog.
 * @d: struct
 * @name: Dog's name
 * @age: Age of dog
 * @owner: Name of the dog's owner
 *
 * Return: Void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
