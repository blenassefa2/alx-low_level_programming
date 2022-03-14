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
	{
		for (i = j + 1; i <= '9'; i++)
		{
			if (j != 0 || i != 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(j);
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
