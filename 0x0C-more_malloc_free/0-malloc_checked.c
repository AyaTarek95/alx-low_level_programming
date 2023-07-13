#include "main.h"
/**
 * malloc_checked - description
 * @b: 1st
 * Return: always 0
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
