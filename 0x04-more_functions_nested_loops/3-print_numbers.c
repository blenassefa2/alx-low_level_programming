#include <stdio.h>
/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return void (nothing)
 */

void print_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
		printf("%i", j);
	putchar('\n');
}
