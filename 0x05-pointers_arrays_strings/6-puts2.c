#include <stdio.h>
/**
 * puts2 - prints the input
 * @str: value to be printed
 * Return: nothing (void)
 */
void puts2(char *str)
{
	int count;
	char *t;

	count = 0
	for (t = str; *t != '\0'; t++)
		count++;
	for (t = str + count; str <= t; str += 2)
		printf("%c", *str);
	printf("\n");
}
