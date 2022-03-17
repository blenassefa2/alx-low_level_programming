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
		n = -1 * n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}
	if ((int)(n1 / 10))
	{
		print_number((int)(n1 / 10));
	}
	_putchar((n1 % 10) + '0');
		
}
