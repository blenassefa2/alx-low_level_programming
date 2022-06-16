#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node -  adds node at the begining of given list
 * @head: double pointer to a list
 * @str: new string to add in the node
 *
 * Return: address of new element if any failure NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);

	(*head) = new;

	return (*head);
}
