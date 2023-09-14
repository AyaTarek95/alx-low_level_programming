#include "lists.h"
/**
 * free_dlistint - free list
 * @head: pointer
 * Return:void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != 0)
		while (head->prev != 0)
			head = head->prev;
	while ((temp = head) != 0)
	{
		head = head->next;
		free(temp);
	}
}
