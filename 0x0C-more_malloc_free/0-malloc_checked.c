#include "main.h"
/**
 * malloc_checked - description
 * @b: 1st
 * Return: always 0
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	exit(98);


return (a);
}
