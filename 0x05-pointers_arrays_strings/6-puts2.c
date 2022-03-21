#include <stdio.h>
/**
 * puts2 - prints the input
 * @str: value to be printed
 * Return: nothing (void)
 */
void puts2(char *str)
{
	char *t;

	for (t = str; t != '\0'; t++)
		;
	for (; str < t; str += 2)
		printf("%c", *str);
	printf("\n");
}
