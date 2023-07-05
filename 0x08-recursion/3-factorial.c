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
	return (n * factorial(n - 1));
			}
