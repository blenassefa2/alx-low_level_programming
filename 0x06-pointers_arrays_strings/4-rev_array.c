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
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i< n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
