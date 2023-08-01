#include "lists.h"
/**
 * listint_len - calc nodes number  in  list
 * @h: printed list
 * Return: nodes no. of a list
 */
size_t listint_len(const listint_t *h)
{
	size_t y;

	for (y = 0; h; y++)
		h = h->next;
	return (y);
}
