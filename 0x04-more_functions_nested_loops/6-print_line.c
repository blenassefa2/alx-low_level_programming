#include <stdio.h>
/**
 * print_line - print '_' n times
 * @n: the number of times '_' will be printed
 * Return void (nothing)
 */

void print_line(int n)
{
	int j;

	for (j = n; j > 0; j--)
		putchar('_');
	putchar('\n');
}
