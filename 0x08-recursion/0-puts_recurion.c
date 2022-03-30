#include <stdio.h>
/**
 * _puts_recursion - provides similar function as puts
 * @s: string to be displayed
 * Return: nothing (void)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
