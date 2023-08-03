#include <stdio.h>
#include "main.h"

/**
 * get_bit - get a crtain bit value
 * @n: given no.
 * @index: range of index
 * Return: n value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int h;

	if (index > 64)
		return (-1);

	h = n >> index;

	return (h & 1);
}
