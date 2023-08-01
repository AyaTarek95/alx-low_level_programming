#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - cut head of the list
 * @head: list head
 * Return: value of head
 */
int pop_listint(listint_t **head)
{
	int z;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);
	tmp = current = *head;
	if (*head)
	{
		z = current->n;
		*head = current->next;
		free(tmp);
	}
	else
		z = 0;
	return (z);
}
