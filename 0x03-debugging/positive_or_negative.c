#include <stdio.h>
/**
 * positive_or_negative - tells wether a number is poitive or not
 * @i: integer to be checked
 * Return: noting (void)
 */
int positive_or_negative(int i)
{
	if (i < 0)
		printf("%i is negative", i);
	else if (i > 0)
		printf("%i is positive", i);
	else
		printf("%i is zero", i);
}
