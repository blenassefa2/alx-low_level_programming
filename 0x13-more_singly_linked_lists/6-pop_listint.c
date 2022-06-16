#include "lists.h"

/**
 * pop_listint - deletes the heads of a list
 * @head: pointer to head of list
 *
 * Return: the data that was deleted or 0 if none
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;

	*temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
