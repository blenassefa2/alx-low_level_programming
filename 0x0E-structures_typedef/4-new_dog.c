#include <stdlib.h>
#include "dog.h"
/**
 * slen - calc length
 * @s: tobe calc
 *
 * Return:num of chars in s
 */
int slen(char *s)
{
	int count = 0;

	while (*s++)
	{
		count++;
	}
	return (count + 1);
}
/**
 * new_dog - creates a new dog instance
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer to newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int k;
	dog_t *ret = malloc(sizeof(dog_t));

	if (!ret)
		return (NULL);

	ret->name = malloc(sizeof(char) * slen(name));
	if (!(ret->name))
	{
		free(ret);
		return (NULL);
	}

	ret->owner = malloc(sizeof(char) * slen(owner));
	if (!(ret->owner))
	{
		free(ret->name);
		free(ret);
		return (NULL);
	}


	for (k = 0; k < slen(name); k++)
	{
		ret->name[k] = name[k];
	}

	for (k = 0; k < slen(owner); k++)
	{
		ret->owner[k] = owner[k];
	}

	ret->age = age;
	return (ret);
}
