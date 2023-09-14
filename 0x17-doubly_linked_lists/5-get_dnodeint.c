#include "lists.h"
/**
 * get_dnodeint_at_index - get specific node
 * @head: pointer
 * @index: place of node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == 0)
		return (NULL);

	while (head->prev != 0)
		head = head->prev;

	x = 0;

	while (head != 0)
	{
		if (x == index)
			break;
		head = head->next;
		x++;
	}
	return (head);
}
