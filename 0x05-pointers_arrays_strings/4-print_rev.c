#include "main.h"
/**
 * print_rev - Short description, single line
 * @s: Description of parameter x
 *
 * Return: Description of the returned value
 */
void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	printf('%c', *(s + i--));
	printf('\n');
}
