#include <stdlib.h>
#include "dog.h"
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
	if (ret->name)
		ret->name = name;
	else
	{
		free(ret);
		return (NULL);
	}
	ret->age = age;
	if (ret->owner)
		ret->owner = owner;
	else
	{
		free(ret);
		return (NULL);
	}

	return (ret);
}
