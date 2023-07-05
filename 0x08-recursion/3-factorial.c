#include "main.h"
/**
 * factorial - description
 * @n: 1st
 * Return: always 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
	return (n);
	return (n * factorial(n - 1));
			}
