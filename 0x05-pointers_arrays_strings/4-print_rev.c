#include <stdio.h>
/**
 * print_rev - prints input in reverse
 * @s: input to be printed
 * Return: void (Nothing)
 */
void print_rev(char *s)
{
	char *t;

	t = s;
	for (; *s != '\0'; s++)
		;
	for (s = s - 1; s >= t; s--)
		printf("%c", *s);
	printf("\n");
}
