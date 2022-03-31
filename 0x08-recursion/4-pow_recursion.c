#include <stdio.h>
/**
 * _pow_recursion - calculate exponents
 * @x: base
 * @y: exponent
 * Return: an integer product of y x's
 */
int _pow_recursion(int x, int y)
{
	if (y < 0 || (y == 0 && x == 0))
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
