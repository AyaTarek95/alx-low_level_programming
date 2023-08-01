#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - add  node
 * @head: list's head
 * @index: place of new node
 * @n: inserted value
 * Return: lists's head
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *current, *added;

	current = *head;
	added = malloc(sizeof(listint_t));
	if (added == NULL)
		return (NULL);
	added->n = n;
	if (index == 0)
	{
		added->next = current;
		*head = added;
		return (*head);
	}
	while (index > 1)
	{
		current = current->next;
		index--;
		if (!current)
		{
			free(added);
			return (NULL);
		}
	}
	added->next = current->next;
	current->next = added;
	return (added);
}
