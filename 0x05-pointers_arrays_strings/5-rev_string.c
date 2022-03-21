#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: nothing (void)
 */
void rev_string(char *s)
{
	char *h, temp;

	for (h = s; *h != '\0'; h++)
		;
	h--;
	while (h > s)
	{
		temp = *s;
		*s = *h;
		*h = temp;
		s++;
		h--;
	}
}
