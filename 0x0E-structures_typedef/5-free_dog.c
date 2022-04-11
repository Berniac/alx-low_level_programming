#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @d: struct
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
