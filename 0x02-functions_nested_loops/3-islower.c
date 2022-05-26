#include <stdio.h>
/**
 * _islower - is a function that checks if argument is lowercase
 * @c: the input
 * Return:1 if c is lowercase else 0
 */
int _islower(int c)
{
	if ("a" <= c && c <= "z")
		return 1
	return 0
}
