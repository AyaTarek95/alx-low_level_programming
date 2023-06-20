#include "main.h"
/**
 * print_sign - Short description, single line
 * @n: Description of parameter x
 *
 * Return: Description of the returned value
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
}
	else
	{
		_putchar(45);
		return (-1);
	}
}
