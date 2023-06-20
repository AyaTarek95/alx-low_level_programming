#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Short description, single line
 * @n: Description of parameter x
 *
 * Return: Description of the returned value
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf('%d, ', count);
		for (count = n; count < 98; count++)
			printf('%d, ', count);
	printf('98\n');
}
