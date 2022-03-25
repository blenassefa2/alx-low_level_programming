#include <stdio.h>
/**
 * _strcmp - calculates the total length of string
 * @s1: a reference to the first char of a string
 * @s2: a reference to the additional string
 * Return: referenct to a string
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; *s1 != '\0' || *s2 != '\0'; s1++, s2++)
	{
		if (*s1 != *s2)
			return ((*s1 - *s2) - 1);
	return (0);
}
