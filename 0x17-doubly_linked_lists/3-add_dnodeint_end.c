#include "lists.h"
/**
 * add_dnodeint_end - add node at end
 * @head: pointer
 * @n: data
 * Return: address of newnode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *p;

	new = malloc(sizeof(dlistint_t));
	if (new == 0)
		return (NULL);
	new->n = n;
	new->next = NULL;
	p = *head;
	if (p != 0)
	{
		while (p->next != 0)
			p = p->next;
		p->next = new;
	}
	else
		*head = new;
	new->prev = p;
	return (new);
}
