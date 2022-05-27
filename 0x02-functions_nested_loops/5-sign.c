#include "main.h"
/**
 * print_sign - is a function that checks if argument is lowercase
 * @c: the input
 * Return:1 if c is lowercase else 0
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar("+");
		return (1);
	}
	if (c < 0)
	{
		_putchar("-");
		return (-1);
	}
	_putchar("0");
	return (0);
}
