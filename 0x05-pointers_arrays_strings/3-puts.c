#include <stdio.h>
/**
 * _puts - prints the input
 * @str: value to be printed
 * Return: nothing (void)
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
		printf("%c", *str);
	printf("\n");
}
