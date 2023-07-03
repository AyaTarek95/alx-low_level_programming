#include "main.h"
/**
 * print_diagsums - description
 * @a: 1st
 * @size : 2nd
 * return : always
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
		printf("%d, %d\n", sum1, sum2);
}
