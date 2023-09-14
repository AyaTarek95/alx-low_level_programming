#include "lists.h"
/**
 * add_dnodeint - at node at beginning
 * @head: pointer
 * @n: data
 * Return: new elemwnt address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == 0)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	p = *head;
	if (p != 0)
	{
		while (p->prev != 0)
			p = p->prev;
	}
	new->next = p;
	if (p != 0)
		p->prev = new;
	*head = new;
	return (new);
}
