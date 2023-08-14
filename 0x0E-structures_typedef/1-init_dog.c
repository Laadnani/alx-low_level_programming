#include "dog.h"

/**
 * init_dog - initialize a dog struct
 * Struct - struct
 * @d: new struct to make
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
