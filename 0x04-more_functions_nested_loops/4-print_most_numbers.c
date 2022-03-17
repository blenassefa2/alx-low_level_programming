#include <stdio.h>
/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 *
 * Return void (nothing)
 */

void print_most_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (j == 2 || j == 4)
			continue;
		printf("%i", j);
	}
	putchar('\n');
}
