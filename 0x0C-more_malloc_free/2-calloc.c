#include <stdlib.h>
#include "main.h"

/**
 * _memset - function that fills the first n bytes of memory area
 * @s:the string whose memory area will be replaced
 * @b:the char that will replace the fields of s
 * @n:the number of bytes to replace
 * Return: a referece to the pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *tmp;

	for (tmp = s; n > 0; n--, tmp++)
		*tmp = b;
	return (s);
}

/**
 * *_calloc -  fills memory with constant
 * @nmemb: memory area to be filed
 * @size: char to compy
 *
 * Return: memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
