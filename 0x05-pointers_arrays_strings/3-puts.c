#include "main.h"
/**
 * _puts - Short description, single line
 * @str: Description of parameter x
 *
 * Return: Description of the returned value
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		}
	_putchar('\n');
	}
