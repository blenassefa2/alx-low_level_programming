#include <stdio.h>
/**
 * _strlen - calculates the total length of string
 * @s: a reference to the first char of a string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;
	return (count);
}
