#include <stdio.h>
/**
 * _strncpy - calculates the total length of string
 * @dest: a reference to the first char of a string
 * @src: a reference to the additional string
 * @n: the number of characters to concatnate
 * Return: referenct to a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp;
	char *temp2;

	temp = dest;
	for (temp2 = src; n > 0; temp2++)
	{
		*temp = *temp2;
		if (*temp == '\0')
			break;
		temp++;
		n--;
	}
	return (dest);
}
