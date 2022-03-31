#include <stdio.h>
/**
 * _strlen_recursion - returns length of string
 * @s: the string we need whose length
 * Return: integer len of input
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
