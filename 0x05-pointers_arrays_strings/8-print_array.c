#include <stdio.h>
/**
 * print_array - prints an array of integers
 * @a: reference to the start of the array
 * @n: number of elements to print
 * Return: nothing (void)
 */
void print_array(int *a, int n)
{
	int *stop;

	for (stop = a + n; a <= stop; a++)
	{
		printf("%i", *a);
		if (a != stop)
			printf(", ");
	}
	printf("\n");
}
