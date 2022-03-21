#include <stdio.h>
/**
 * puts_half - prints half of input
 * @str: input to be printed
 * Return: nothing (void)
 */
void puts_half(char *str)
{
	int count, half;
	char *t;

	t = str;
	for (count = 0; *t != '\0'; t++)
		count++;
	half = count / 2;
	if (count % 2 != 0)
		half = (count - 1) / 2;
	for (t = str + half; str <= t; str++)
		printf("%c", *str);
}
