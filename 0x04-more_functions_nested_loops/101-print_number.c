#include <stdio.h>
#include <stdlib.h>
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
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
