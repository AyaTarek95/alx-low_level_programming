#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Free list
 * @head: head's pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
