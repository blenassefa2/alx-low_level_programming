#include <stdion.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog- print elements dog struct
 * @d: the struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: nil\n");
	if (d->age)
		printf("Age: %i\n", d->age);
	else
		printf("Age: nil\n");
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: nil\n");
}
