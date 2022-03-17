#include <stdio.h>
/**
 * _isupper - tells if character is uppercase or not
 * @c: ascii code of a character
 * Return 1 if uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
