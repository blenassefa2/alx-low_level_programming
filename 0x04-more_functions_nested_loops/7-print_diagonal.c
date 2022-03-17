#include <stdio.h>
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
			putchar(' ');
		putchar('\\');
		putchar('\n');
	}
	putchar('\n');
}
