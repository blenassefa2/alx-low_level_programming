#include <stdio.h>
/**
 * main - raunning starts here
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int j;

	putchar('0');
	for (j = '1'; j <= '9'; j++)
	{
		putchar(',');
		putchar(' ');
		putchar(j);
	}
	return (0);
}
