#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - list set to be free!
 * @head: 1st node of list
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
