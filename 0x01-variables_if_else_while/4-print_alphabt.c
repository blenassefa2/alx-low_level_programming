#include <stdio.h>
/**
 * main - raunning starts here
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
		if (j != 'q' && j != 'e')
			putchar(j);
	putchar('\n');
	return (0);
}
