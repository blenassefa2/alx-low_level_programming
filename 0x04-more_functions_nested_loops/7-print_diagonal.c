#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - print a diagonal
 * @n: length of diagonal
 * Return void (nothing)
 */

void print_diagonal(int n)
{
	int j, i;

	for (i = n; i > 0; i--)
	{
		for (j = 0; j < n - i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
