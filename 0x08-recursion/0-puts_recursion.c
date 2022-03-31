#include <stdio.h>
/**
 * _puts_recursion - works like puts
 * @s: string to be put
 * Return: nothing (void)
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
		return;
	printf("%c", *s);
	_puts_recursion(s + 1);
}
