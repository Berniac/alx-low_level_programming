#ifndef _DOG_
#define _DOG_

/**
 * struct dog - General information about a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner of the dog
 *
 * Description: Struct that contains information
 * regarding the name of a dog, age and its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
