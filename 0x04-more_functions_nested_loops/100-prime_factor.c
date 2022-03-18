#include <stdio.h>
/**
 * main - the first function
 * Return: 0 always
 */
int main(void)
{
	long int i, n;

	i = 2;
	n = 612852475143;

	while (i * i < n)
	{
		while (n % i == 0)
		{
			n = n / i
		}
		i = i + 1;
	}
	printf("%ld\n", n);
	return (0);
}
