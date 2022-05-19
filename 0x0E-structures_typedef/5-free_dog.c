#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog struct
 * @d: dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	if (d)
		free(d);
}
