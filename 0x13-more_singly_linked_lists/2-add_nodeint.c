#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - fn adds nodes to list
 * @head: 1st node of list
 * @n: no. added to the list
 * Return: current place in list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
