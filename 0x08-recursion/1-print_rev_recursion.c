#include <stdio.h>
/**
 * _print_rev_recursion - prints in reverse
 * @s: string to be displayed
 * Return: nothing (void)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_puts_recursion(s);
		printf("%c", *s);
	}
}
