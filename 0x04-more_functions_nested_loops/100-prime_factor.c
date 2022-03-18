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

	while (i < n)
	{
		if (n % i == 0)
		{
			n /= i
		}
		i++;
	}
	printf("%ld\n", n);
	return (0);
}
