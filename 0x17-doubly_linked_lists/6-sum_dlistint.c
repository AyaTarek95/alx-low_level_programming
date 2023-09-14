#include "lists.h"
/**
 * sum_dlistint - sum all data
 * @head: pointer
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int total;

	total = 0;
	if (head != 0)
	{
		while (head->prev != 0)
			head = head->prev;
		while (head != 0)
		{
			total += head->n;
			head = head->next;
		}
	}
	return (total);
}
