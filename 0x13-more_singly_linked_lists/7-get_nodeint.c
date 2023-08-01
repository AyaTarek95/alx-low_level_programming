#include "lists.h"
/**
 * get_nodeint_at_index - go to certain node
 * @head: lists head
 * @index: node index
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	n = 0;
	while (n < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		n++;
	}
	return (head);
}
