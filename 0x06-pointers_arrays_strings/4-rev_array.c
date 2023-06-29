#include "main.h"
/**
*reverse_array - Entry point
*
*@a: A C program that prints with put function
*@n:2nd
*Return: Always 0 (success)
*/
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
	tmp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = tmp;
	}
}
