#include <stdio.h>
/**
 * main - raunning starts here
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int h, i, j;


	for (h = '0'; h <= '9'; h++)
	{
		for (i = h + 1; i <= '9'; i++)
		{
			for (j = i + 1; j <= '9'; j++)
			{
				if (j != '0')
				{
					putchar(',');
					putchar(' ');
				}
				putchar(h);
				putchar(i);
				putchar(j);
			}
		}
	}
	putchar('\n');
	return (0);
}
