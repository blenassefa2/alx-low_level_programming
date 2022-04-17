#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: what to allocate
 * Return: the space allocated; 98 if failure
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		return (98);
	return (x);
}
