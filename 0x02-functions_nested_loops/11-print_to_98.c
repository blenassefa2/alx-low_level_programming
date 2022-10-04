#include "main.h"
/**
 * print_to_98 - prints numbers from n to 98
 * @n: the number we start printing from
 */

void print_to_98(int n)
{
	_putchar(n + '0');
	if (n < 98)
		n++;
	else if (n > 98)
		n--;

	while (n != 98)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n + '0');
		if (n > 98)
			n--;
		else if(n < 98)
			n++;
	}
}
