#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the dogs structs allocations
 * @d: dog struct ro free
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
