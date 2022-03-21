#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: nothing (void)
 */
void rev_string(char *s)
{
	char *t, *h;

	for (h = s; h != '\0'; h++)
	{
		*t = *h;
		t++;
	}
	for (; h > s; h--)
		;
	for (; h != '\0'; t--)
	{
		*h = *t
		h++;
	}
}
