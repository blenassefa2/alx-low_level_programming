#include <stdlib.h>
#include "main.h"

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
