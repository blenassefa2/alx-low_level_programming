#include <stdio.h>
/**
 * print_alphabet_x10 - prints alphabets in lowercase
 *
 * Return: void (noting)
 */

void print_alphabet_x10(void)
{
	int j, i;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			putchar(j);
		putchar('\n');
	}
}
