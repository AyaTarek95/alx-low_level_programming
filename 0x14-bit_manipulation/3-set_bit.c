#include "main.h"
/**
 * set_bit - add a value to bit
 * @n: passed no.
 * @index: change place
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > 64)
		return (-1);

	for (j = 1; index > 0; index--, j *= 2)
		;
	*n += j;

	return (1);
}
