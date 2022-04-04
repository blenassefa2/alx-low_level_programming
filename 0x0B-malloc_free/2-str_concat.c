#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first part of the new string
 * @s2: second part of the new string
 * Return: a string
 */
char *str_concat(char *s1, char *s2)
{
	char *ans, *tmp;
	int counter;

	counter = 0;
	if (s1 != NULL)
		for (tmp = s1; *tmp != '\0'; tmp++, counter++)
			;
	if (s2 != NULL)
		for (tmp = s2; *tmp != '\0'; tmp++, counter++)
			;
	if (counter == 0)
	{
		ans = malloc(sizeof(char));
		if (ans == NULL)
			return (NULL);
		*ans = '\0';
		return (ans);
	}
	ans = malloc(sizeof(char) * (counter + 1));
	if (ans == NULL)
		return (NULL);
	tmp = ans;
	if (s1 != NULL)
		for (tmp = ans; *s1 != '\0'; s1++, tmp++)
			*tmp = *s1;
	if (s2 != NULL)
		for (; *s2 != '\0'; s2++, tmp++)
			*tmp = *s2;
	*tmp = '\0';
	return (ans);
}
