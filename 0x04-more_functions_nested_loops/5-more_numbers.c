#include <stdio.h>
/**
 * more_numbers - print numbers from 0 to 14 10 times
 *
 * Return void (nothing)
 */

void more_numbers(void)
{
	int j, i;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
			printf("%i", j);
		putchar('\n');
	}
}
