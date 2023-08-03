#include <stdio.h>
#include "main.h"

/**
 * clear_bit - set bit value to 0
 * @n: number to change
 * @index: position to change
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int h;

	if (index > 64)
		return (-1);
	h = index;
	for (i = 1; h > 0; i *= 2, h--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
