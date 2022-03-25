#include <stdio.h>
/**
 * _strcat - calculates the total length of string
 * @dest: a reference to the first char of a string
 * @src: a reference to the additional string
 * Return: referenct to a string
 */
char *_strcat(char *dest, char *src)
{
	char *temp, *temp2;

	for (temp = dest; *temp != '\0'; temp++)
		;
	for (temp2 = src; *temp2 != '\0'; temp2++)
	{
		*temp = *temp2;
		temp++;
	}
	return (dest);
}
