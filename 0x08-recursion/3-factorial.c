#include <stdio.h>
/**
 * factorial - calculates factorial
 * @n: number whose factorial we are calculating
 * Return: factorial of our input
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n < 2)
		return (1);
	return (n * factorial(n - 1));
}
