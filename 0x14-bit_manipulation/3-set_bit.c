#include "main.h"

/**
 * set_bit - sets the value of bit at an index
 * @n: pointer to the number to be changed
 * @index: index of bit representatin
 *
 * Return: 1 for success -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
