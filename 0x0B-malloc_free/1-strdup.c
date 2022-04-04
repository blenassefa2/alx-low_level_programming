#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - creates a string and initializies it
 * @str: the string that will be copied to thenew memory
 * Return: a reference to the start of new string
 */
char *_strdup(char *str)
{
	char *ans, *tmp;

	ans = malloc(sizeof(str));
	if (ans == NULL || str == NULL)
		return (NULL);
	for (tmp = ans; *str != '\0'; str++, tmp++)
		*tmp = *str;
	*tmp = '\0';
	return (ans);
}
