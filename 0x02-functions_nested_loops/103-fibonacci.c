#include <stdio.h>
/**
 * main - finds and prints the sum of
 * the even-valued terms followed by \n
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i;
	unsigned long int j = 1, k = 2;
	unsigned long int next = 0, sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
			sum = sum + j;
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu\n", sum);
	return (0);
}
