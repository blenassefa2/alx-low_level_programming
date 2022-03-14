#include <stdio.h>
/**
 * main - raunning starts here
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int j, i;

	for (j = '0'; j <= '9'; j++)
		putchar(j);
	for (i = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
