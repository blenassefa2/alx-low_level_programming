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
	return (count);
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
	dog_t *ret = malloc(sizeof(dog_t));

	if (!ret)
	{
		free(ret);
		return (NULL);
	}

	ret->name = malloc(sizeof(char) * slen(name));
	ret->name = name;
	if (!(ret->name))
	{
		free(ret->name);
		free(ret);
		return (NULL);
	}
	ret->age = age;

	ret->owner = malloc(sizeof(char) * slen(owner));
	ret->owner = owner;
	if (!(ret->owner))
	{
		free(ret->owner);
		free(ret);
		return (NULL);
	}

	return (ret);
}
