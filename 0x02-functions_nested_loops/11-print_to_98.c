#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - prints numbers from n to 98
 * @n: the number we start printing from
 */

void print_to_98(int n)
{
	printf("%i", n);
	if (n < 98)
		n++;
	else if (n > 98)
		n--;
	else
	{
		printf("\n");
		return;
	}
	while (n != 98)
	{
		printf(", %i", n);
		if (n > 98)
			n--;
		else if (n < 98)
			n++;
	}
	printf(", %i\n", n);
	return;
}
