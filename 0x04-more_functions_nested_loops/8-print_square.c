#include <stdio.h>
#include "main.h"
/**
 * print_square - print a square
 * @size: size of square
 * Return void (nothing)
 */

void print_square(int size)
{
	int j, i;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
