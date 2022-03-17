#include <stdio.h>
#include "main.h"
/**
 * print_triangle - print a diagonal
 * @n: length of diagonal
 * Return void (nothing)
 */
void print_triangle(int n)
{
	int j, i, k;

	for (i = n; n > 0; n--)
	{
		for (j = 1; j < n; j++)
		{
			_putchar(' ');
		}
		for (k = i; k >= 1 && j >= n; k--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (i <= 0)
	{
		_putchar('\n');
	}
}
