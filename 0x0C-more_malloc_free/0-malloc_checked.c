#include "main.h"
/**
 * malloc_checked - description
 * @b: 1st
 * Return: always 0
 */
void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == 0)
	exit(98);


return (a);
}
