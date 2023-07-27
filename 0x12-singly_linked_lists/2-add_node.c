#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - add new node at the start of linked list
 * @head: double pointer to list_t
 * @str: new str add in node
 * Return:  address of  new element
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

new->str = strdup(str);
new->length = length;
new->next = (*head);
(*head) = new;

	return (*head);
}
