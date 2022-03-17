#include <stdio.h>
/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: void (noting)
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
		putchar(j);
	putchar('\n');
}
