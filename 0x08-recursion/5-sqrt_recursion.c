#include "main.h"
/**
 * support_function - description
 * @number:1st
 * @root:2nd
 * Return: always 0
 */
int support_function(int number, int root)
{
	if ((root * root) > number)
	return (-1);
	else if ((root * root) == number)
	return (root);
	else
	return (support_function(number, root + 1));
}

/**
 * _sqrt_recursion - description
 * @n:3rd
 * Return: always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	else
	return (support_function(n, 0));
}
