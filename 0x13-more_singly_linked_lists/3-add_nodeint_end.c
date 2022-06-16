#include "lists.h"

/**
 * add_nodeint_end - add a node at end of list
 * @head: pointer to head of list we alter
 * @n: data to insert
 *
 * Return: pointer to new node or NULL for failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
