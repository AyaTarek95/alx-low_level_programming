#include "main.h"
/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int num, unsigned int size)
{
	char *a;
	unsigned int b;
	if (num == 0 || size == 0)
		return (NULL);
	a = malloc(num * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (num * size); b++)
		a[b] = 0;
	return (a);
}
