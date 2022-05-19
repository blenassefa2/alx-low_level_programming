#include <stdio.h>
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
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("(nil)\n");
	if (d->age != NULL)
		printf("Age: %i\n", d->age);
	else
		printf("(nil)\n");
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("(nil)\n");
}
