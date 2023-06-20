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
	if (n > 98)
		n--;
			printf('%d, ', n);
	else
		n < 98; n++;
			printf('%d, ', n);
	printf('98\n');
}
