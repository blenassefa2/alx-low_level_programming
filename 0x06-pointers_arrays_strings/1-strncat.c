#include <stdio.h>
/**
 * _strncat - calculates the total length of string
 * @dest: a reference to the first char of a string
 * @src: a reference to the additional string
 * @n: the number of characters to concatnate
 * Return: referenct to a string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp, *temp2;

	temp = dest;
	for (temp2 = scr; *temp2 != '\0' && n >= 0; temp2++)
	{
		*temp = *temp2;
		temp++;
		n--;
	}
	return (dest);
}
