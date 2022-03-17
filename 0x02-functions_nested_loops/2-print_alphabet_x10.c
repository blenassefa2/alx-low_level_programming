#include <stdio.h>
/**
 * print_alphabet_10x - prints alphabets in lowercase
 *
 * Return: void (noting)
 */

void print_alphabet_10x(void)
{
	int j, i;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			putchar(j);
		putchar('\n');
	}
}
