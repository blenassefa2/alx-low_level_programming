#include <stdio.h>
/**
 * main - raunning starts here
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int h, i, j, k;


	for (h = '0'; h <= '9'; h++)
	{
		for (i = h ; i <= '9'; i++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				for (k = '0'; k <= '9'; k++)
				{
					if (h == '0' && i == '0' && j == '0' && k == '0')
						continue
					if (h != '0' || i != '0' || j != '0' || k != '1')
					{
						putchar(',');
						putchar(' ');
					}
					putchar(h);
					putchar(i);
					putchar(' ');
					putchar(j);
					putchar(k);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
