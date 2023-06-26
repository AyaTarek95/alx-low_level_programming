#include "main.h"
/**
 * print_rev - Short description, single line
 * @s: Description of parameter x
 *
 * Return: Description of the returned value
 */
void print_rev(char *s)
{
	int i = 0;
	
	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
}
	_putchar('\n');
}
