#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_array - reverses an array
 * @a: the array to be reversed
 * @n: the size of the array
 * Return: notting
 */
void reverse_array(int *a, int n)
{
	int *tmp, *tmp2, *c;

	tmp = malloc(sizeof(int) * n);
	tmp2 = tmp;
	for (c = a + n; c >= a; c--)
	{
		*tmp2 = *c;
		tmp2++;
	}
	for (; tmp <= tmp2; tmp++, a++)
		*a = *tmp;
}
