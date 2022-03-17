#include <stdio.h>
/**
 * print_triangle - print a diagonal
 * @n: length of diagonal
 * Return void (nothing)
 */
void print_triangle(int n)
{
	int j, i, k;

	for (i = n; i > 0; i--)
	{
		for (j = 0; j < i - 1; j++)
			putchar(' ');
		for (k = j; k < n; k++)
			putchar('#');
		putchar('\n');
	}
	putchar('\n');
}
