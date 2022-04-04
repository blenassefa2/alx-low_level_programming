#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array and initializies it
 * @size: size of array to be created
 * @c: character the array will be initialized with
 * Return: a reference to the start of the array
 */
char *create_array(unsigned int size, char c)
{
	char *ans, *tmp;
	int count;

	ans = malloc(sizeof(char) * size);
	if (ans == NULL || size == 0)
		return (NULL);
	count = 0;
	for (tmp = ans; count < size; count++, tmp++)
		*tmp = c;
	return (ans);
}
