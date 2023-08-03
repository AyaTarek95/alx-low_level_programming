#include "main.h"
/**
 * flip_bits - convert numbers
 * @n: number
 * @m: second number
 * Return: no. of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int counter;

	d = n ^ m;
	counter = 0;

	while (d)
	{
		counter++;
		d &= (d - 1);
	}

	return (counter);
}
