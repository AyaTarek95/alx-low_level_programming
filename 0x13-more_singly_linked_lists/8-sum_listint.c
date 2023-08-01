#include "lists.h"
/**
 * sum_listint - gets values of a list added
 * @head: list's head
 * Return: lists elements sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
