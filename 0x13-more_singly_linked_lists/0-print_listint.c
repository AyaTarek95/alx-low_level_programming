#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print  list_t elements
 * @h: to be printed linked list
 * Return: nodes no.
 */
size_t print_listint(const listint_t *h)
{
	size_t x;

	for (x = 0; h; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
