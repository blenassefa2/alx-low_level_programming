#include <stdio.h>
/**
 * puts2 - prints the input
 * @str: value to be printed
 * Return: nothing (void)
 */
void puts2(char *str)
{
	for (; *str != '\0'; str += 2)
		printf("%c", *str);
	printf("\n");
}
