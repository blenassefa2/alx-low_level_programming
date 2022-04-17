#include <stdio.h>
/**
 * _isdigit - tells if character is digit or not
 * @c: ascii code of a character
 * Return: 1 if digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
