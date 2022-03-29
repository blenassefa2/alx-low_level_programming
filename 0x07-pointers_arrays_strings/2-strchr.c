#include <stdio.h>
/**
 * _strchr - function that finds a char in a string
 * @s:the sring where we look c for
 * @c:the char we are looking for
 * Return: a pointer to the first occurence of the character c if c in s else return NULL
 */
char *_strchr(char *s, char c)
{
	char *tmp;

	for (tmp = s; *tmp != '\0'; tmp++)
		if (*tmp == c)
			return (tmp);
	return (NULL);
}
