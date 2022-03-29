#include <stdio.h>
/**
 * _memcpy - function that copies n bytes of memory area from src to dest
 * @dest:the string whose memory area will be replaced
 * @src:the string whose memory will be copied from
 * @n:the number of bytes to replace
 * Return: a referece to the pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp;

	for (tmp = dest; n > 0; n--, tmp++, src++)
		*tmp = *src;
	return (dest);
}
