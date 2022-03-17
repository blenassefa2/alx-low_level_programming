#include <stdio.h>
#include "main.h"
/**
 * print_number - print number
 * @n: first number
 * Return: nothing (void)
 */

int print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number((int)n1 / 10);
	}
	_putchar(n1 + '0');
		
}
