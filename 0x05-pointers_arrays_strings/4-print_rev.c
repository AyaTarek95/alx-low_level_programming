#include "main.h"
/**
 * print_rev - Short description, single line
 * @s: Description of parameter x
 *
 * Return: Description of the returned value
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++ )
	for (i--; i>= 0; i--)
		_putchar(s[i]);
	
	_putchar('\n');
}
