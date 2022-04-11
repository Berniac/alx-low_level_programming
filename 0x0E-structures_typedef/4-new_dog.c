#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog.
 * @name: Dog's name
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: dog_t, if it fails NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *the_dog;
	unsigned int i, nlen, olen;

	the_dog = malloc(sizeof(*the_dog));
	if (the_dog == NULL || !(name) || !(owner))
	{
		free(the_dog);
		return (NULL);
	}

	nlen = strlen(name);
	olen = strlen(owner);

	the_dog->name = malloc(nlen + 1);
	the_dog->owner = malloc(olen + 1);

	if(!(the_dog->name) || !(the_dog->owner))
	{
		free(the_dog->name);
		free(the_dog->owner);
		free(the_dog);
		return (NULL);
	}

	for (i = 0; i < nlen; i++)
		the_dog->name[i] = name[i];
	the_dog->name[i] = '\0';

	the_dog->age = age;

	for (i = 0; i < olen; i++)
		the_dog->owner[i] = owner[i];
	the_dog->owner[i] = '\0';

	return (the_dog);
}
