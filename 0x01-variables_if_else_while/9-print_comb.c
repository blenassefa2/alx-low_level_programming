#include <stdio.h>
/**
 * main - raunning starts here
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int j;


	for (j = '0'; j <= '9'; j++)
	{
		if (j != '0')
		{
			putchar(',');
			putchar(' ');
		}
		putchar(j);
	}
	putchar('\n');
	return (0);
}
