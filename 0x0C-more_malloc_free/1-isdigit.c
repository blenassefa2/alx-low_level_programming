#include <stdio.h>
/**
 * is_digit - tells if character is digit or not
 * @s: ascii code of a character
 * Return: 1 if digit otherwise 0
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
