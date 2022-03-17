#include <stdio.h>
void print_alphabet(void);
/**
 * main - checks the code
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

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
