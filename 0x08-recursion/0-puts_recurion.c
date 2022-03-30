#include "main.h"
/**
 * _puts_recursion - provides similar function as puts
 * @s: string to be displayed
 * Return: nothing (void)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
