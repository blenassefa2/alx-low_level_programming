#include <stdio.h>
/**
 * _strcpy - copies one string to another
 * @dest: destination
 * @src: source
 * Return: reference to the copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *d;

	for (d = dest; *src != '\0'; src++)
	{
		*d = *src;
		d++;
	}
	*d = '\0';

	return (dest);
}
