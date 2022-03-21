#include <stdio.h>
/**
 * swap_int - swaps integers
 * @a: reference to first int
 * @b: reference to second int
 * Return: nothing (void)
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
